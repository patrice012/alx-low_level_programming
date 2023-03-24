#include "main.h"

/**
 *print_diagonal - print diagonal line of "\"
 *Return: None
 *@n: number of times to print "\"
*/

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < n; j++)
		{
			if (j != i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
}
