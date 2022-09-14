#include "main.h"

/**
 * main - prints _putchar
 * Return: always 0
 *
 */
int main(void)
{
	char c[] = "_putchar\n";
	int i;

	for (i = 0; i <= 8; i++)
		_putchar(c[i]);
	return (0);
}
