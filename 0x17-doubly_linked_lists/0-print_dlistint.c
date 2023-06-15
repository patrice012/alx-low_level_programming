#include "lists.h"


/**
  * print_dlistint - print list elements
  * @h: list head
  * Return: number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp = h;

	if (temp == NULL)
		return (0);
	while (temp)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
