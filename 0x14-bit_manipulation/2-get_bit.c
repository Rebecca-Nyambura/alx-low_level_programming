#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: index, starting from 0 of the bit you want to get
 * Return: value of the bit at index
 * -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
