#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
  * print_numbers -  function that prints numbers, followed by a new line.
  * @separator: the string seperator
  * @n: number of variables to print
  * Return: Nothing
  */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(ap, int);

		if (i == 0)
			printf("%d", value);
		else
			if (separator)
				printf("%s%d", separator, value);
			else
				printf("%d", value);
	}
	printf("\n");
	va_end(ap);
}
