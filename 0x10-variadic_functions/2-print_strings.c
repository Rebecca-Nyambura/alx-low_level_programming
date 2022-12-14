#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: list of numbers
 * Return: nil if one string is null
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *p;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		p = va_arg(valist, char *);
		printf("%s", (p == NULL) ? "(nil)" : p);
	}
	printf("\n");
	va_end(valist);
}
