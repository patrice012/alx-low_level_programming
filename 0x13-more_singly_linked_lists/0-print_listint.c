#include <unistd.h>
#include <stddef.h>
#include "lists.h"

int _putchar(char c);

/**
  * print_listint -  function that prints all the elements of a listint_t list.
  * @h: linked list
  * Return: the size of the list
  */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (!h)
		return (0);

	while (h)
	{
		_putchar('0' + h->n);
		_putchar('\n');
		i++;
		h = h->next;
	}

	return (i);
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
