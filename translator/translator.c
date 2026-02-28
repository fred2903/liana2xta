#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "translator.h"

struct Transition *trans_head = NULL;
struct Transition *trans_tail = NULL;
struct Location *loc_head = NULL;
struct Location *loc_tail = NULL;
struct ActionEntry *action_head = NULL;
struct ActionEntry *action_tail = NULL;
struct VarEntry *clock_head = NULL;
struct VarEntry *clock_tail = NULL;
struct VarEntry *int_head = NULL;
struct VarEntry *int_tail = NULL;
bool is_init = false;
bool is_urg = false;
char* invar = NULL;

char* cat(char* s1, char* sep, char* s2) {
    if (!s1 && !s2)
        return NULL;
    else if (!s1)
        return strdup(s2);
    else if (!s2)
        return strdup(s1);
    else {
        char* res = malloc(strlen(s1) + strlen(sep) + strlen(s2) + 1);
        sprintf(res, "%s%s%s", s1, sep, s2);
        return res;
    }
}

void add_transition(char* source, char* action, char* guard, char* assign, char* target) {
    struct Transition *new_t = malloc(sizeof(struct Transition));
    new_t->source = strdup(source);
    new_t->target = strdup(target);
    new_t->action = action ? strdup(action) : NULL;
    new_t->guard = guard ? strdup(guard) : NULL;
    new_t->assign = assign ? strdup(assign) : NULL;
    new_t->next = NULL;

    if (trans_tail == NULL) {
        trans_head = new_t;
        trans_tail = new_t;
    }
    else {
        trans_tail->next = new_t;
        trans_tail = new_t;
    }
}

void add_location(char* name, char* inv, bool init, bool urg) {
    struct Location *new_l = malloc(sizeof(struct Location));
    new_l->name = strdup(name);
    new_l->invariant = inv ? strdup(inv) : NULL;
    new_l->is_init = init;
    new_l->is_urg = urg;
    new_l->next = NULL;

    if (loc_tail == NULL) {
        loc_head = new_l;
        loc_tail = new_l;
    }
    else {
        loc_tail->next = new_l;
        loc_tail = new_l;
    }
}

void add_action(char* name) {
    struct ActionEntry *new_a = malloc(sizeof(struct ActionEntry));
    new_a->name = strdup(name);
    new_a->type = SYNC_UNDEFINED;
    new_a->next = NULL;
    
    if (action_tail == NULL) {
        action_head = new_a;
        action_tail = new_a;
    }
    else {
        action_tail->next = new_a;
        action_tail = new_a;
    }
}

void update_action(char* name, char* marker) {
    struct ActionEntry *curr = action_head;
    while (curr) {
        if (!strcmp(curr->name, name)) {
            enum SyncType new_type = SYNC_NONE;
            if (marker && !strcmp(marker, "!"))
                new_type = SYNC_OUTPUT;
            else if (marker && !strcmp(marker, "?"))
                new_type = SYNC_INPUT;

            /* check that the action type is consistent inside the automaton: always synchronized or always not */
            if ((curr->type == SYNC_NONE && (new_type == SYNC_INPUT || new_type == SYNC_OUTPUT)) || ((curr->type == SYNC_INPUT || curr->type == SYNC_OUTPUT) && new_type == SYNC_NONE)) {
                fprintf(stderr, "Error: Action '%s' has inconsistent markers\n", name);
                exit(1);
            }
            curr->type = new_type;
            return;
        }
        curr = curr->next;
    }
}

void add_clock(char* name) {
    struct VarEntry *new_c = malloc(sizeof(struct VarEntry));
    new_c->name = strdup(name);
    new_c->next = NULL;

    if (clock_tail == NULL) {
        clock_head = new_c;
        clock_tail = new_c;
    }
    else {
        clock_tail->next = new_c;
        clock_tail = new_c;
    }
}

void add_int(char* name) {
    struct VarEntry *new_i = malloc(sizeof(struct VarEntry));
    new_i->name = strdup(name);
    new_i->next = NULL;
    
    if (int_tail == NULL) {
        int_head = new_i;
        int_tail = new_i;
    }
    else {
        int_tail->next = new_i;
        int_tail = new_i;
    }
}
