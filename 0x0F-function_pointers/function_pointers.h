#ifndef FUNCTION_POINTERS.H
#define FUNCTION_POINTERS.H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif