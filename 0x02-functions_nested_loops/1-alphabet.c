#include "main.h"

/**
 * main - prints the alphabet followed by a new line use _putchar twice
 * Return: Always 0;
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
