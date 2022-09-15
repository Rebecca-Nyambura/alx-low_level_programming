#include "main.h"

/**
 * main - prints 10 times the alphabet, in lowercase, followed by a new line
 * 
 * Return: Always 0
 *
 */
void print_alphabet_x10(void)
{
	char i;
	char h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
