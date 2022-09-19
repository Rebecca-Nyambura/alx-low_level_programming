#include "main.h"

/**
 * print_rev - print a string in reverse followed by a new line
 * @str: string to be printed
 * Return: nothing
 */

void print_rev(char *s)
{
	int i = 0;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
