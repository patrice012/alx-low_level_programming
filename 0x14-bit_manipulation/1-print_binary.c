#include "main.h"
#include <stdio.h>

/**
  * print_binary - function that prints the binary representation of a number.
  * @n: the number to convert to binary
  * Return: none
  */

void print_binary(unsigned long int n)
{
	int temp, len = 0;

	temp = n;

	/* make right shift until number = 0 */
	while (((temp >>= 1) > 0))
	{
		len += 1;
	}

	while (len >= 0)
	{
		printf("%ld", (n >> len) & 1);
		len--;
	}
}
