#ifndef LINKER_H
#define LINKER_H

struct GlobalVar {
    char *type; /* "int", "chan", "clock" */
    char *name;
    struct GlobalVar *next;
};

struct Process {
    char *name;
    char *body; /* raw string of the process body */
    struct Process *next;
};

struct SystemList {
    char *name;
    struct SystemList *next;
};

extern struct GlobalVar *global_head;
extern struct Process *proc_head;
extern struct SystemList *sys_head;
extern char *current_type;

void add_global(char *type, char *name);
void add_process(char *name, char *body);
void add_system(char *name);
void print_merged_xta();

#endif
