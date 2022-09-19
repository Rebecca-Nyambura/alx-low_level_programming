#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
