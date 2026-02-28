#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "linker.h"

struct GlobalVar *global_head = NULL;
struct GlobalVar *global_tail = NULL;
struct Process *proc_head = NULL;
struct Process *proc_tail = NULL;
struct SystemList *sys_head = NULL;
struct SystemList *sys_tail = NULL;
char *current_type = NULL;

void add_global(char *type, char *name) {
    /* check if the global declaration already exists (valid, it must be de-duplicated) */
    struct GlobalVar *curr = global_head;
    while (curr) {
        if (!strcmp(curr->name, name))
            return; /* global declaration already exists, skip */
        curr = curr->next;
    }

    /* add global declaration */
    struct GlobalVar *new_g = malloc(sizeof(struct GlobalVar));
    new_g->type = strdup(type);
    new_g->name = strdup(name);
    new_g->next = NULL;
    if (!global_tail) {
        global_head = new_g;
        global_tail = new_g;
    }
    else {
        global_tail->next = new_g;
        global_tail = new_g;
    }
}

void add_process(char *name, char *body) {
    struct Process *new_p = malloc(sizeof(struct Process));
    new_p->name = strdup(name);
    new_p->body = strdup(body);
    new_p->next = NULL;
    if (!proc_tail) {
        proc_head = new_p;
        proc_tail = new_p;
    }
    else {
        proc_tail->next = new_p;
        proc_tail = new_p;
    }
}

void add_system(char *name) {
    /* check if the system declaration already exists (not valid, two processes with the same name can't cohexist) */
    struct SystemList *curr = sys_head;
    while (curr) {
        if (!strcmp(curr->name, name)) {
            fprintf(stderr, "Error: identifier %s is present in more than one process\n", name);
            exit(1);
        }
        curr = curr->next;
    }

    /* add system declaration */
    struct SystemList *new_s = malloc(sizeof(struct SystemList));
    new_s->name = strdup(name);
    new_s->next = NULL;
    if (!sys_tail) {
        sys_head = new_s;
        sys_tail = new_s;
    }
    else {
        sys_tail->next = new_s;
        sys_tail = new_s;
    }
}

void print_merged_xta() {
    /* 1 - print combined globals, neatly grouped by type */
    char *types[] = {"int", "chan", "clock"};
    
    for (int i = 0; i < 3; i++) {
        struct GlobalVar *g = global_head;
        bool first = true;
        while (g) {
            if (!strcmp(g->type, types[i])) {
                if (first) {
                    printf("%s %s", types[i], g->name);
                    first = false;
                }
                else
                    printf(", %s", g->name);
            }
            g = g->next;
        }
        if (!first)
            printf(";\n"); 
    }
    printf("\n");

    /* 2 - print processes */
    struct Process *p = proc_head;
    while (p) {
        printf("process %s() {\n%s}\n\n", p->name, p->body);
        p = p->next;
    }

    /* 3 - print combined system list */
    struct SystemList *s = sys_head;
    if (s) {
        printf("system ");
        while (s) {
            printf("%s%s", s->name, s->next ? ", " : ";\n");
            s = s->next;
        }
    }
}
