#include <stdio.h>
#include <stdarg.h>

#include "variadic_functions.h"


/**
  * print_all - a function that prints anything.
  * @format: a list of types of arguments
  * Return: Nothing
  */


void print_all(const char * const format, ...)
{
	char *ptr, *str = "";
	int i = 0;

	va_list ap;

	va_start(ap, format);

	if (format)
	{

		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", str, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", str, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", str, va_arg(ap, double));
					break;
				case 's':
					ptr = va_arg(ap, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", str, ptr);
					break;
				default:
					i++;
					continue;
			}
			str = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}

