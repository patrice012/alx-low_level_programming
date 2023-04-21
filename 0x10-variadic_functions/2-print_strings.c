#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
  * print_strings - function that prints strings, followed by a new line.
  * @separator: separator to be used
  * @n: number  of string to print
  * Return: Nothing
  */


void print_strings(const  char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);

	}
	printf("\n");
	va_end(ap);
}
