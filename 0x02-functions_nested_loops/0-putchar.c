#include "main.h"

/**
 * main - Prints _putchar using _putchar
 *
 * Return: 0 - Success
 */

int main(void)
{
	char c[] = "_putchar\n";
	int i;

	for (i = 0; i <= 8; i++)
		_putchar(c[i]);
	return (0);
}
