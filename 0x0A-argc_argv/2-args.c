#include "main.h"
#include "stdio.h"

/**
 * main - print all arguments received
 * @argc: number of arguments supplied
 * @argv: array of pointers to the arguments 
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
