#include "main.h"

/**
  * main - main function
  * @argc: number of arguments passed to the program
  * @argv: one-dimensional array of strings
  * Return: always 0
  */


int main(int argc, char *argv[])
{
	printf("%s \n", argv[argc - 1]);
	return (EXIT_SUCCESS);
}
