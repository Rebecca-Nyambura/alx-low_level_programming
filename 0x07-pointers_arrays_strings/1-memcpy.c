#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area
 * @dest: memory area to copy bytes to
 * @src: memory area from which bytes are copied
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
