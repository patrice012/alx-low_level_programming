#include "lists.h"


/**
  * dlistint_len - print list elements
  * @h: list head
  * Return: number of nodes
  */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp = h;

	if (temp == NULL)
		return (0);
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
