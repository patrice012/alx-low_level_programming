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
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (EXIT_SUCCESS);

}

