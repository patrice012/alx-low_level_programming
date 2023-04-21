#include <stdarg.h>
#include "variadic_functions.h"


/**
  * sum_them_all - sum all of its parameters
  * @n: first value
  * Return: the sum
  */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}

	va_end(ptr);
	return (sum);

}
