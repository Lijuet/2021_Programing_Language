#define NSYMS 30
struct symtab {
    char *name;
    double value;
} symtab[NSYMS];
struct symtab *symlook();