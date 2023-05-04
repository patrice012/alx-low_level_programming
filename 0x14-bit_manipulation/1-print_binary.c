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
	char ptr;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	temp = n;

	/* make right shift until number = 0 */
	while (((temp >>= 1) > 0))
	{
		len += 1;
	}

	while (len >= 0)
	{
		ptr = '0' + ((n >> len) & 1);
		_putchar(ptr);
		len--;
	}
}
