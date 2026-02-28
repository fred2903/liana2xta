/* prologue */

%{
#include <string.h>
#include <stdbool.h>
#include "translator.h"
#include "translator.tab.h"

void yyerror(char *s);
%}

/* definitions */

%option noyywrap
%option yylineno

NUMBER              [0-9]+
ID                  [a-zA-Z_][a-zA-Z0-9_]*

/* rules */

%%

"create"            { return CREATE; }
"automaton"         { return AUTOMATON; }
"clocks"            { return CLOCKS; }
"actions"           { return ACTIONS; }
"integers"          { return INTEGERS; }
"locations"         { return LOCATIONS; }
"transitions"       { return TRANSITIONS; }
"symm"              { return SYMM; }
"ini"               { return INI; }
"urg"               { return URG; }
"inv"               { return INV; }

"{"                 { return LBRACE; }
"}"                 { return RBRACE; }
"["                 { return LSQUARE; }
"]"                 { return RSQUARE; }
"("                 { return LPAR; }
")"                 { return RPAR; }
","                 { return COMMA; }
";"                 { return SEMI; }
"::"                { return DCOLON; }
"<="                { yylval.sval = strdup(yytext); return LE; }
">="                { yylval.sval = strdup(yytext); return GE; }
"=="                { yylval.sval = strdup(yytext); return EQ; }
"<"                 { yylval.sval = strdup(yytext); return LT; }
">"                 { yylval.sval = strdup(yytext); return GT; }
":"                 { return COLON; }
"!"                 { yylval.sval = strdup(yytext); return EXCLAM; }
"?"                 { yylval.sval = strdup(yytext); return INTERROG; }
"="                 { return ASSIGN; }
"+"                 { return PLUS; }
"-"                 { return MINUS; }
"*"                 { return MUL; }
"/"                 { return DIV; }
"||"                { return OR; }
"&&"                { return AND; }

"T"|"true"          { yylval.bval = true; return BOOL; }
"F"|"false"         { yylval.bval = false; return BOOL; }
{NUMBER}            { yylval.sval = strdup(yytext); return INT; } /* numbers are treated like strings since the parser doesn't perform arithmetic operations */
{ID}                { yylval.sval = strdup(yytext); return LITERAL; }
[ \t\n\r]+          { /* ignore whitespaces */ }
.                   { yyerror("unexpected token"); return EXIT_FAILURE; }

%%

/* user code */

/* empty */
