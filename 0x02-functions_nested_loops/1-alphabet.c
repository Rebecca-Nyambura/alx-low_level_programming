#include "main.h"

/**
 * main - prints the alphabet followed by a new line
 * 	  use _putchar twice
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}

