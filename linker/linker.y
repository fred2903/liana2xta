/* prologue */

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#include "linker.h"

extern int yylineno;
extern FILE *yyin;

int yylex();
void yyerror(char *s);
%}

/* definitions */

%union {
    char* sval;
}

%token PROCESS SYSTEM LPAR RPAR COMMA SEMI
%token <sval> ID TYPE PROCESS_BODY

/* rules */

%%

xta_file
    : elements
;

elements
    : element
    | elements element
;

element
    : global_decl
    | process_decl
    | system_decl
;

global_decl
    : TYPE
    {
        current_type = $1;
    }
    var_list SEMI
    {
        free($1);
        current_type = NULL;
    }
;

var_list
    : ID 
    { 
        add_global(current_type, $1); 
        free($1); 
    }
    | var_list COMMA ID 
    { 
        add_global(current_type, $3); 
        free($3); 
    }
;

process_decl
    : PROCESS ID LPAR RPAR PROCESS_BODY
    {
        add_process($2, $5);
        free($2);
        free($5);
    }
;

system_decl
    : SYSTEM sys_list SEMI
;

sys_list
    : ID
    {
        add_system($1);
        free($1);
    }
    | sys_list COMMA ID
    {
        add_system($3);
        free($3);
    }
;

%%

/* user code */

void yyerror(char *s) {
    fprintf(stderr, "Error at line %d: %s\n", yylineno, s);
}

int main(int argc, char **argv) {
    DIR *dir;
    struct dirent *ent;

    if (argc == 2) {
        /* open the directory passed as a command-line argument */
        dir = opendir(argv[1]);
        if (!dir) {
            fprintf(stderr, "Error: Could not open directory %s\n", argv[1]);
            return EXIT_FAILURE;
        }
    }
    else if (argc == 1) {
        /* default to '.' if no directory is provided */
        dir = opendir(".");
        if (!dir) {
            fprintf(stderr, "Error: Could not open current directory\n");
            return EXIT_FAILURE;
        }
    }
    else {
        /* invalid number of arguments */
        fprintf(stderr, "Usage: %s [<directory_path>]\n", argv[0]);
        return EXIT_FAILURE;
    }

    struct stat st;
    while ((ent = readdir(dir)) != NULL) {
        /* skip hidden files and directory navigation pointers (. and ..) */
        if (ent->d_name[0] == '.')
            continue;
        
        /* construct the full path */
        char *file_path = malloc(strlen(argv[1]) + strlen(ent->d_name) + 2);
        sprintf(file_path, "%s/%s", argv[1], ent->d_name);
        
        /* check if it is a regular file */
        if (!stat(file_path, &st) && S_ISREG(st.st_mode)) {
            yyin = fopen(file_path, "r");
            if (yyin) {
                /* parse the file */
                if (yyparse()) {
                    fprintf(stderr, "Parsing of file %s failed\n", file_path);
                    fclose(yyin);
                    closedir(dir);
                    return EXIT_FAILURE;
                }
                fclose(yyin);
            }
            else {
                fprintf(stderr, "Error: Could not open file %s\n", file_path);
                closedir(dir);
                return EXIT_FAILURE;
            }
        }
        free(file_path);
    }
    closedir(dir);

    /* print the fully merged XTA TA network when all the XTA coarse files have been scanned */
    print_merged_xta();
    
    return EXIT_SUCCESS;
}
