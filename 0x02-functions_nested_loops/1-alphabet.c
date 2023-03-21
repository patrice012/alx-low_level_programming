#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char ele = 'a';

	while (ele <= 'z')
	{
		_putchar(ele);
		ele++;
	}
	_putchar('\n');

}

