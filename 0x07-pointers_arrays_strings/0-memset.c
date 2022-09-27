#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area
 * @s: pointer to a memory area
 * @b: value to fill up memory area
 * @n: number of bytes of memory area
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);

}
