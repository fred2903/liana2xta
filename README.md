# liana2xta
Liana2XTA is a model transformation tool that translates Liana specifications into XTA models, enabling automated formal verification and analysis through model checking frameworks, while preserving the behavioral semantics

## Prerequisites
To build and run this project, you need to have the following installed on your system:
* **Bison** (Parser generator)
* **Flex** (Lexical analyzer generator)
* **GCC** (GNU Compiler Collection, or any standard C compiler)

## Build Instructions
To compile the translator from the source files, open your terminal in the project directory and run the following commands in order:

1. **Generate the parser:**
   Run Bison to generate the C code and the header file from the grammar specification.
   ```bash
   bison -d parser.y
   ```
   This generates `parser.tab.c`

2. **Generate the scanner:**
   Run Flex to generate the C code for the lexical analyzer.
   ```bash
   flex scanner.l
   ```
   This generates `lex.yy.c`

3. **Compile the executable:**
   Use GCC to compile the generated C files, along with the data structure logic, into a single executable named `liana2xta`.
   ```bash
   gcc parser.tab.c lex.yy.c parser.c -o liana2xta

   This generates `liana2xta`

## Usage
Once compiled, you can use the tool to translate a Liana file into an XTA file.

The translator takes the Liana file as an argument (or alternatively from standard input if no argument is present) and prints the resulting XTA model to standard output. You can easily redirect this output into a new `.xta` file using the `>` operator.

```bash
# Basic execution (prints output directly to the terminal)
./liana2xta input_model.liana

# Standard execution (saves the output to an XTA file)
./liana2xta input_model.liana > output_model.xta
```

## Example
If you have a Liana specification file named `light_switch.liana`, you can generate the UPPAAL-compatible model by running:
```bash
./liana2xta light_switch.liana > light_switch.xta
```

You can then open `light_switch.xta` directly in the UPPAAL model checker to perform formal verification, simulate the automaton, and verify your temporal logic queries.
