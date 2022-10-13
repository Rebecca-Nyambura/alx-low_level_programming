#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array with elements
 * @size: number of elements in array
 * @cmp: pointer to the function to be used to compare values
 * Return: -1 if no element matches
 * or size <= 0
 * return pointer to the first corresponding element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);

}
