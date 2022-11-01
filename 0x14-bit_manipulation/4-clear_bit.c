#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked
 * -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
