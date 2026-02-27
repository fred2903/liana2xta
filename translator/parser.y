/* prologue */

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "parser.h"

extern int yylineno;
extern FILE *yyin;

int yylex();
void yyerror(char *s);
%}

/* definitions */

%union {
    bool bval;
    char* sval;
}

%token CREATE AUTOMATON CLOCKS ACTIONS INTEGERS LOCATIONS TRANSITIONS SYMM INI URG INV LBRACE RBRACE LSQUARE RSQUARE LPAR RPAR COMMA SEMI DCOLON COLON ASSIGN PLUS MINUS MUL DIV OR AND
%token <bval> BOOL
%token <sval> INT LITERAL EXCLAM INTERROG LE GE EQ LT GT

%type <sval> guard_rule clock_constraint_list clock_constraint comp_op arithm_expr bool_expr reset_list reset_opt assign_list assign_opt bool_opt assign_expr transition_rule actions_rule io_opt

%left OR
%left AND
%left EQ LT GT LE GE
%left PLUS MINUS
%left MUL DIV

/* rules */

%%

system /* this rule incorporates a very complex semantic action responsible of merging the most dense parts of the automata declaration (actions, locations and transitions) */
    : CREATE AUTOMATON LITERAL symm_rule LBRACE clock_block action_block integer_block location_block transition_block RBRACE
    {
        /* 1 - print global variables */
        struct VarEntry *i_curr = int_head;
        if (i_curr) {
            printf("int ");
            while (i_curr) {
                printf("%s%s", i_curr->name, i_curr->next ? ", " : ";\n");
                i_curr = i_curr->next;
            }
        }
        
        /* 2 - print the global channels (only if synchronized) */
        struct ActionEntry *a_curr = action_head;
        bool first_chan = true;
        while (a_curr) {
            if (a_curr->type == SYNC_INPUT || a_curr->type == SYNC_OUTPUT) {
                if (first_chan) {
                    printf("chan ");
                    first_chan = false;
                }
                else {
                    printf(", ");
                }
                printf("%s", a_curr->name);
            }
            a_curr = a_curr->next;
        }
        if (!first_chan)
            printf(";\n");

        /* 3 - start the process block */
        printf("process %s() {\n", $3);

        /* 4 - print local clocks */
        struct VarEntry *c_curr = clock_head;
        if (c_curr) {
            printf("  clock ");
            while (c_curr) {
                printf("%s%s", c_curr->name, c_curr->next ? ", " : ";\n");
                c_curr = c_curr->next;
            }
        }

        /* 5 - print locations with related invariants */
        printf("  state\n    ");
        struct Location *l_curr = loc_head;
        while (l_curr) {
            printf("%s", l_curr->name);
            if (l_curr->invariant)
                printf(" { %s }", l_curr->invariant);
            l_curr = l_curr->next;
            printf("%s", l_curr ? ", " : ";\n");
        }

        /* 6 - print urgent declaration */
        l_curr = loc_head;
        bool first_urg = true; /* flag to track the first urgent state */
        while (l_curr) {
            if (l_curr->is_urg) {
                if (first_urg) {
                    printf("  urgent %s", l_curr->name);
                    first_urg = false;
                }
                else
                    printf(", %s", l_curr->name);
            }
            l_curr = l_curr->next;
        }
        if (!first_urg)
            printf(";\n"); /* close the urgent list if we found any urgent location */
        
        /* 7 - print initial declaration */
        l_curr = loc_head;
        int init_count = 0;
        char* init_name = NULL;
        while (l_curr) {
            if (l_curr->is_init) {
                init_count++;
                init_name = l_curr->name;
            }
            l_curr = l_curr->next;
        }

        /* check the number of locations declared as initial */
        if (init_count == 0) {
            fprintf(stderr, "Error: Automaton '%s' has no initial state declared\n", $3);
            exit(1);
        }
        else if (init_count > 1) {
            fprintf(stderr, "Error: Automaton '%s' has multiple (%d) initial states declared\n", $3, init_count);
            exit(1);
        }
        else {
            /* exactly 1 initial state is present */
            printf("  init %s;\n", init_name);
        }
        
        /* 8 - print transitions */
        printf("  trans\n");
        struct Transition *t_curr = trans_head;
        while (t_curr) {
            printf("    %s -> %s {\n", t_curr->source, t_curr->target);
            
            /* check if the considered action is synchronized and print it in positive case */
            a_curr = action_head;
            while (a_curr && t_curr->action) {
                int len = strlen(a_curr->name);
                /* check if the base name matches and is immediately followed by '!', '?', or '\0' */
                if (!strncmp(a_curr->name, t_curr->action, len) && (t_curr->action[len] == '\0' || t_curr->action[len] == '!' || t_curr->action[len] == '?')) /* note that in case of '?' or '!' in any position, it must be necessarily the last before the string terminator, otherwise the action is not valid for the declared grammar syntax */
                    break; /* match found, exit loop */
                a_curr = a_curr->next;
            }
            if (a_curr && (a_curr->type == SYNC_INPUT || a_curr->type == SYNC_OUTPUT))
                printf("      sync %s;\n", t_curr->action);
            
            if (t_curr->guard)
                printf("      guard %s;\n", t_curr->guard);
            if (t_curr->assign)
                printf("      assign %s;\n", t_curr->assign);
            printf("    }%s\n", t_curr->next ? "," : ";");
            t_curr = t_curr->next;
        }

        /* 9 - close process and declare system */
        printf("}\nsystem %s;\n", $3);

        /* 10 - cleanup */
        while (int_head) {
            i_curr = int_head;
            int_head = int_head->next;

            free(i_curr->name);
            free(i_curr);
        }
        while (clock_head) {
            c_curr = clock_head;
            clock_head = clock_head->next;
            
            free(c_curr->name);
            free(c_curr);
        }
        while (loc_head) {
            l_curr = loc_head;
            loc_head = loc_head->next;

            free(l_curr->name);
            if (l_curr->invariant)
                free(l_curr->invariant);
            free(l_curr);
        }
        while (trans_head) {
            t_curr = trans_head;
            trans_head = trans_head->next;

            free(t_curr->source);
            free(t_curr->target);
            if (t_curr->action)
                free(t_curr->action);
            if (t_curr->guard)
                free(t_curr->guard);
            if (t_curr->assign)
                free(t_curr->assign);
            free(t_curr);
        }
        free($3);
    }
;

symm_rule /* not translated since it is a Liana peculiarity */
    : /* empty */
    | DCOLON SYMM LT INT GT
;

clock_block /* to reset a clock is not compulsory, nevertheless the braces structure must be present */
    : CLOCKS LBRACE RBRACE
    | CLOCKS LBRACE clock_list SEMI RBRACE
;

clock_list
    : LITERAL
    {
        add_clock($1);
        free($1);
    }
    | clock_list COMMA LITERAL
    {
        add_clock($3);
        free($3);
    }
;

action_block
    : ACTIONS LBRACE action_list SEMI RBRACE
;

action_list
    : LITERAL
    {
        /* buffer current action instead of printing it for successive semantic analysis */
        add_action($1);
        free($1);
    }
    | action_list COMMA LITERAL
    {
        add_action($3);
        free($3);
    }
;

integer_block
    : /* empty */
    | INTEGERS LBRACE integer_list SEMI RBRACE
;

integer_list
    : LITERAL
    {
        add_int($1);
        free($1);
    }
    | integer_list COMMA LITERAL
    {
        add_int($3);
        free($3);
    }
;

location_block
    : LOCATIONS LBRACE location_list SEMI RBRACE
;

location_list
    : loc_rule
    | location_list COMMA loc_rule
;

loc_rule
    : LITERAL 
    {
        /* reset initial and urgency flag for each location */
        is_init = false;
        is_urg = false;
    }
    LT loc_props GT
    {   
        /* buffer current location instead of printing it for successive semantic analysis */
        add_location($1, invar, is_init, is_urg);
        
        free($1);
        if (invar) {
            free(invar);
            invar = NULL;
        }
    }
;

loc_props
    : /* empty */
    | ini
    | urg
    | inv
    | ini COMMA urg
    | ini COMMA inv
    | urg COMMA inv
    | ini COMMA urg COMMA inv
;

ini
    : INI COLON BOOL
    {
        is_init = $3;
    }
;

urg
    : URG COLON BOOL
    {
        is_urg = $3;
    }
;

inv
    : INV COLON guard_rule
    {
        invar = $3 ? strdup($3) : NULL;
    }
;

transition_block
    : TRANSITIONS LBRACE transition_list SEMI RBRACE
;

transition_list
    : transition_rule
    | transition_list COMMA transition_rule
;

transition_rule
    : LPAR LITERAL COMMA actions_rule COMMA guard_rule COMMA bool_opt LSQUARE reset_opt RSQUARE COMMA assign_opt LITERAL RPAR
    {
        /* merge respectively the clock guard with the variable guard and the clock reset with the variable assignment */
        char* final_guard = cat($6, " && ", $8);
        char* final_assign = cat($10, ", ", $13);
        
        /* buffer current transition instead of printing it for successive semantic analysis */
        add_transition($2, $4, final_guard, final_assign, $14);

        /* cleanup */
        if (final_guard)
            free(final_guard);
        if (final_assign)
            free(final_assign);
        free($2);
        free($14);
        if ($4)
            free($4);
        if ($6)
            free($6);
        if ($8)
            free($8);
        if ($10)
            free($10);
        if ($13)
            free($13);
    }
;

actions_rule
    : LITERAL io_opt
    {
        /* update considered buffered action and check consistency with previous uses in other transitions */
        update_action($1, $2);
        $$ = cat($1, "", $2);
        free($1);
        free($2);
    }
;

io_opt
    : /* empty */
    {
        $$ = strdup("");
    }
    | EXCLAM | INTERROG
    /* default action "$$ = $1;" is sufficient */
;

guard_rule
    : LSQUARE RSQUARE
    {
        $$ = NULL;
    }
    | LSQUARE clock_constraint_list RSQUARE
    {
        $$ = $2;
    }
;

clock_constraint_list
    : clock_constraint
    /* default action "$$ = $1;" is sufficient */
    | clock_constraint_list COMMA clock_constraint
    {
        $$ = cat($1, " && ", $3);
        free($1);
        free($3);
    }
;

clock_constraint
    : LPAR LITERAL COMMA comp_op COMMA INT RPAR 
    {
        /* cat() function can be exploited in this way to simply concatenate something like "x >= 1" */
        char* temp = cat($2, " ", $4);
        $$ = cat(temp, " ", $6);
        free(temp);
        free($2);
        free($4);
        free($6);
    }
;

comp_op
    : LT | LE | EQ | GE | GT
    /* default action "$$ = $1;" is sufficient */
;

reset_opt
    : /* empty */
    {
        $$ = NULL;
    }
    | reset_list
    /* default action "$$ = $1;" is sufficient */
;

reset_list
    : LITERAL 
    {
        $$ = cat($1, " = ", "0"); /* append " = 0" at the end of the clock reset list */
        free($1);
    }
    | reset_list COMMA LITERAL 
    { 
        $$ = cat($1, ", ", $3);
        free($1);
        free($3); 
    }
;

bool_opt
    : /* empty */
    {
        $$ = NULL;
    }
    | bool_expr COMMA
    /* default action "$$ = $1;" is sufficient */
;

assign_opt
    : /* empty */
    {
        $$ = NULL;
    }
    | LSQUARE assign_list RSQUARE COMMA
    {
        $$ = $2;
    }
;

assign_list
    : assign_expr
    /* default action "$$ = $1;" is sufficient */
    | assign_list COMMA assign_expr
    {
        $$ = cat($1, ", ", $3);
        free($1);
        free($3);
    }
;

assign_expr
    : LITERAL ASSIGN arithm_expr
    {
        $$ = cat($1, " = ", $3);
        free($1);
        free($3);
    }
;

arithm_expr
    : INT | LITERAL
    /* default action "$$ = $1;" is sufficient */
    | LPAR arithm_expr RPAR
    {
        $$ = cat("(", $2, ")");
        free($2);
    }
    | arithm_expr PLUS arithm_expr
    {
        $$ = cat($1, " + ", $3);
        free($1);
        free($3);
    }
    | arithm_expr MINUS arithm_expr
    {
        $$ = cat($1, " - ", $3);
        free($1);
        free($3);
    }
    | arithm_expr MUL arithm_expr
    {
        $$ = cat($1, " * ", $3);
        free($1);
        free($3);
    }
    | arithm_expr DIV arithm_expr
    {
        $$ = cat($1, " / ", $3);
        free($1);
        free($3);
    }
;

bool_expr
    : BOOL
    {
        $$ = strdup($1 ? "true" : "false"); 
    }
    | LPAR bool_expr RPAR
    {
        $$ = cat("(", $2, ")"); 
        free($2); 
    }
    | arithm_expr comp_op arithm_expr
    {
        char* temp = cat($1, " ", $2);
        $$ = cat(temp, " ", $3);
        free(temp);
        free($1);
        free($2);
        free($3);
    }
    | bool_expr AND bool_expr
    {
        $$ = cat($1, " && ", $3); 
        free($1);
        free($3); 
    }
    | bool_expr OR bool_expr
    {
        $$ = cat($1, " || ", $3); 
        free($1);
        free($3); 
    }
;

%%

/* user code */

void yyerror(char *s) {
    fprintf(stderr, "Error at line %d: %s\n", yylineno, s);
}

int main(int argc, char **argv) {
    if (argc > 1) {
        /* open the file passed as a command-line argument */
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            fprintf(stderr, "Error: Could not open file %s\n", argv[1]);
            return 1;
        }
    }
    else {
        /* default to stdin if no file is provided */
        yyin = stdin;
    }

    if (!yyparse()) {
        if (yyin != stdin)
            fclose(yyin);
        return 0;
    }
    else {
        fprintf(stderr, "Parsing failed\n"); 
        return 1;
    }
}