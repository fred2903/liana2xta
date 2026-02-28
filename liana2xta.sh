#!/bin/bash

# default to no force the (re-)build
FORCE_BUILD=0

# check if the first argument is the force flag
if [[ "$1" == "-f" || "$1" == "--force" ]]; then
    FORCE_BUILD=1
    shift
fi

# ensure exactly 1 argument is left (the input file or directory)
if [ "$#" -ne 1 ]; then
    echo "Usage: $(basename "${BASH_SOURCE[0]}") [-f | --force] <file_path | directory_path>"
    exit 1
fi

# exit immediately if a command exits with a non-zero status
set -e

# get the absolute path to the directory where this script is located
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )"

# configuration variables
BUILD_DIR="$SCRIPT_DIR/.build"
LINKER_EXE="$BUILD_DIR/linker"
TRANSLATOR_EXE="$BUILD_DIR/translator"
INPUT="$1"

# 1 - TRANSPARENT BUILD

# if force flag was used, wipe out the old build directory
if [ "$FORCE_BUILD" -eq 1 ]; then
    echo "[Build] Cleaning old build files..."
    rm -rf "$BUILD_DIR"
fi

# create a hidden build directory to keep the workspace clean
mkdir -p "$BUILD_DIR"

# build translator if it doesn't exist
if [ ! -f "$TRANSLATOR_EXE" ]; then
    echo "[Build] Compiling translator..."
    bison -d "$SCRIPT_DIR/translator/translator.y" -o "$BUILD_DIR/translator.tab.c"
    flex -o "$BUILD_DIR/translator.lex.c" "$SCRIPT_DIR/translator/translator.l"
    gcc -I "$SCRIPT_DIR/translator" -I "$BUILD_DIR" "$BUILD_DIR/translator.lex.c" "$BUILD_DIR/translator.tab.c" "$SCRIPT_DIR/translator/translator.c" -o "$TRANSLATOR_EXE"
fi

# build linker if it doesn't exist
if [ ! -f "$LINKER_EXE" ]; then
    echo "[Build] Compiling linker..."
    bison -d "$SCRIPT_DIR/linker/linker.y" -o "$BUILD_DIR/linker.tab.c"
    flex -o "$BUILD_DIR/lex.yy.c" "$SCRIPT_DIR/linker/linker.l"
    gcc -I "$SCRIPT_DIR/linker" -I "$BUILD_DIR" "$BUILD_DIR/lex.yy.c" "$BUILD_DIR/linker.tab.c" "$SCRIPT_DIR/linker/linker.c" -o "$LINKER_EXE"
fi

# 2 - EXECUTION

if [ -f "$INPUT" ]; then
    # 2A - SINGLE FILE
    FILE_BASENAME=$(basename "$INPUT")
    NAME_NO_EXT="${FILE_BASENAME%.*}"
    INPUT_DIR="$(dirname "$INPUT")"
    OUTPUT_FILE="$INPUT_DIR/${NAME_NO_EXT}.xta"
    
    echo "[Process] Translating single file: $INPUT"
    "$TRANSLATOR_EXE" "$INPUT" > "$OUTPUT_FILE"
    
    echo "[Done] Successfully generated: $OUTPUT_FILE"

elif [ -d "$INPUT" ]; then
    # 2B - DIRECTORY
    DIR_ABSOLUTE_PATH="$(cd "$INPUT" &> /dev/null && pwd)"
    DIR_BASENAME="$(basename "$DIR_ABSOLUTE_PATH")"
    INPUT_DIR="$(dirname "$DIR_ABSOLUTE_PATH")"
    OUTPUT_FILE="$INPUT_DIR/${DIR_BASENAME}.xta"

    echo "[Process] Processing directory: $INPUT"
    
    # create a secure temporary directory for intermediate files
    TMP_DIR=$(mktemp -d)
    
    # ensure temporary directory is deleted even if the script doesn't terminate
    trap 'rm -rf "$TMP_DIR"' EXIT
    
    # translate every file in the directory
    for file in "$INPUT"/*; do
        if [ -f "$file" ]; then
            FILE_BASENAME=$(basename "$file")
            NAME_NO_EXT="${FILE_BASENAME%.*}"
            
            # translate and save to temporary directory
            "$TRANSLATOR_EXE" "$file" > "$TMP_DIR/${NAME_NO_EXT}.xta"
        fi
    done
    
    # run the linker on the temporary directory
    echo "[Link] Merging files..."
    "$LINKER_EXE" "$TMP_DIR" > "$OUTPUT_FILE"
    
    echo "[Done] Successfully merged into: $OUTPUT_FILE"

else
    echo "Error: '$INPUT' is not a valid file or directory"
    exit 1
fi