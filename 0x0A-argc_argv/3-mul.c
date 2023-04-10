#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * main -  a program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error \n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[argc - 2]) * atoi(argv[argc - 1]));
	return (EXIT_SUCCESS);

}

