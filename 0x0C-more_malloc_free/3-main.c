#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * simple_print_buffer - the function name
  * @buffer: parameter of type int *.
  * @size: parameter of type unsigned int .
  * Return: void .
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
  * main - The entry point of the program
  * Return: int .
 */
int main(void)
{
	int *a;

	a = array_range(0, 10);
	simple_print_buffer(a, 11);
	free(a);
	return (0);
}
