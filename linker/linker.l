/* the scanner extracts entire process blocks as raw text strings, avoiding the need to parse internal XTA logic.
 * it exploits two different operating modes:
 * - <INITIAL> mode: scans normally for global keywords (int, chan, process) out of process blocks;
 * - <IN_PROCESS> mode (exclusive): triggered when a process block opens with '{'.
 * in <IN_PROCESS> mode, normal rules are ignored. The scanner simply counts nested braces and absorbs
 * all characters into a string buffer until the braces balance to 0, capturing the whole process body.
 */

/* prologue */

%{
#include <string.h>
#include "linker.h"
#include "linker.tab.h"

int brace_count = 0;

void yyerror(char *s);
%}

/* definitions */

%option noyywrap
%option yylineno

%x IN_PROCESS

ID                      [a-zA-Z_][a-zA-Z0-9_]*

/* rules */

%%

<INITIAL>"process"      { return PROCESS; }
<INITIAL>"system"       { return SYSTEM; }
<INITIAL>"int"          { yylval.sval = strdup(yytext); return TYPE; }
<INITIAL>"chan"         { yylval.sval = strdup(yytext); return TYPE; }
<INITIAL>"clock"        { yylval.sval = strdup(yytext); return TYPE; }
<INITIAL>{ID}           { yylval.sval = strdup(yytext); return ID; }
<INITIAL>"("            { return LPAR; }
<INITIAL>")"            { return RPAR; }
<INITIAL>","            { return COMMA; }
<INITIAL>";"            { return SEMI; }

<INITIAL>"{"            {
                            /* found the start of the process */
                            brace_count = 1;
                            BEGIN(IN_PROCESS);
                        }

<IN_PROCESS>"{"         {
                            brace_count++;
                            yymore();
                        }

<IN_PROCESS>"}"         {
                            brace_count--; 
                            if (brace_count == 0) {
                                /* found the end of the process */
                                yytext[yyleng - 1] = '\0'; /* overwrite the final '}' with a null terminator to strip it */
                                yylval.sval = strdup(yytext);
                                BEGIN(INITIAL);
                                return PROCESS_BODY; /* only at the end of the process body the token can be returned */
                            }
                            else
                                yymore();
                        }

<IN_PROCESS>.|\n        { yymore(); } /* absorb everything (note that '.' matches any character except '\n', hence it must be declared explicitly) */

<INITIAL>[ \t\n\r]+     { /* ignore whitespaces */ }
<INITIAL>.              { yyerror("unexpected token"); return 1; }

%%

/* user code */

/* empty */
