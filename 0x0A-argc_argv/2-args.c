#include "stdio.h"

/**
 * main - print all arguments received
 * @argc: number of arguments supplied
 * @argv: array of pointers to the arguments 
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
