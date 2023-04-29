#include "lists.h"

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
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
