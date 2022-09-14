#include "main.h"

/**
 * main - prints _putchar
 * Return: Always 0
 */
int main(void)
{
	char *_putchar = "_putchar";

	while (*_putchar)
	{
		_putchar(*_putchar);
		_putchar++;
	}
	_putchar('\n');
	return (0);
}
