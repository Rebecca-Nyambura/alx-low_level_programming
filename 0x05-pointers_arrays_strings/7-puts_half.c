#include "main.h"

/**
 * puts_half - print second half of string
 * @str: string to use
 * Return: nothing
 */

void puts_half(char *str)
{
	int length, n, i;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	n = (length - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
