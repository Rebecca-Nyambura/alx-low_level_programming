#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers
 * @a: input
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;
	i = 0;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
