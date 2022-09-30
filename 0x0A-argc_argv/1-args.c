#include "main.h"
#include <stdio.h>
/**
 * main - program that prints the number of arguments
 * passed onto it
 * @argc: argument count
 * @argv: argument variable
 * Return: number of arguments
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
