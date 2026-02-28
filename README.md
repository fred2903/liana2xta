# liana2xta

**Liana2XTA** is a model transformation tool that translates Liana specifications into XTA models, enabling automated formal verification and analysis through model checking frameworks (like UPPAAL), while preserving behavioral semantics.

This tool features a transparent two-stage compilation pipeline:
1. **Translator:** parses and translates individual Liana files to self-contained XTA descriptions.
2. **Linker:** merges multiple translated XTA components into a single cohesive XTA file representing the corresponding UPPAAL network architecture. It is required only in case of translation of multiple Liana files constituting a TA network.

## Prerequisites
To run this project, ensure you have the following installed on your system (standard on most Linux/macOS environments):
* **Bash** (Bourne Again SHell)
* **Bison** (parser generator)
* **Flex** (Fast Lexical Analyzer Generator)
* **GCC** (GNU Compiler Collection)

## Installation & setup
You do not need to manually compile the C files. The provided shell script handles the build process transparently on its first run.

1. Clone the repository:
   ```bash
   git clone https://github.com/fred2903/liana2xta.git
   cd liana2xta
   ```
2. Make the script executable:
   ```bash
   chmod +x liana2xta.sh
   ```

## Usage
The tool is entirely driven by the `liana2xta.sh` script. It automatically detects whether you are passing a single file or a directory, handles all intermediate temporary files, and places the resulting `.xta` file right next to your input.

**Syntax:**
```bash
./liana2xta.sh [-f | --force] <file_path | directory_path>
```

### 1. Single file translation
If you pass a single `.txt` Liana file, the script will run the Translator on it to generate the output in the same directory.
```bash
./liana2xta.sh examples/ex1/test1.txt
# Output: Successfully generated: examples/ex1/test1.xta
```

### 2. Full directory translation (network linking)
If you pass a directory containing multiple `.txt` Liana files, the script will run the Translator on all of them independently, then call the Linker to perform the merge, and finally output a single unified `.xta` file named after the directory.
```bash
./liana2xta.sh examples/ex4/test4
# Output: Successfully merged into: examples/ex4/test4.xta
```

### 3. Forcing a rebuild
The script safely caches the compiled Translator and Linker binaries in a hidden `.build` directory to make subsequent runs instantaneous. If you modify the source `.l`, `.y`, or `.c` files, or pull a recent update, use the `-f` or `--force` flag to force a clean recompilation.
```bash
./liana2xta.sh -f examples/ex3/test3
```
