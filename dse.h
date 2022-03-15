#ifndef DSE_H
#define DSE_H 1

#include "dsetypes.h"

/* DSE functions */

/* dsefile.c */
int read_save(char* fileName);
void read_section(struct SaveSection current);


/* dseconv.c */
int determine_magic(char* input);
char* string_magic(unsigned long input);
void print_hex(char* s);

#endif