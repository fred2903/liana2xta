#ifndef PARSER_H
#define PARSER_H

#include <stdbool.h>

struct Transition {
    char *source;
    char *target;
    char *action;
    char *guard;
    char *assign;
    struct Transition *next;
};

struct Location {
    char *name;
    char *invariant;
    bool is_init;
    bool is_urg;
    struct Location *next;
};

enum SyncType {
    SYNC_UNDEFINED,
    SYNC_NONE,
    SYNC_INPUT,
    SYNC_OUTPUT
};

struct ActionEntry {
    char *name;
    enum SyncType type;
    struct ActionEntry *next;
};

struct VarEntry {
    char *name;
    struct VarEntry *next;
};

extern struct Transition *trans_head;
extern struct Transition *trans_tail;
extern struct Location *loc_head;
extern struct Location *loc_tail;
extern struct ActionEntry *action_head;
extern struct ActionEntry *action_tail;
extern struct VarEntry *clock_head;
extern struct VarEntry *clock_tail;
extern struct VarEntry *int_head;
extern struct VarEntry *int_tail;
extern bool is_init;
extern bool is_urg;
extern char* invar;

char* cat(char* s1, char* sep, char* s2);
void add_transition(char* source, char* action, char* guard, char* assign, char* target);
void add_location(char* name, char* inv, bool init, bool urg);
void add_action(char* name);
void update_action(char* name, char* marker);
void add_clock(char* name);
void add_int(char* name);

#endif