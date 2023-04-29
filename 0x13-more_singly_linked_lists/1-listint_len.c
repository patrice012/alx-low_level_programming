#include <stddef.h>
#include "lists.h"

/**
  * listint_len - get the length of the list
  * @h: the list data type object
  * Return: the size of the list
  */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (!h)
		return (0);

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
