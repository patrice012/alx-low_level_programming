#include "lists.h"

/**
  * insert_dnodeint_at_index - insert at any position
  * @h: head of the list
  * @idx: index of the element to insert
  * @n: new node data
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp, *node;

	if (h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	node->n = n;
	temp = *h;

	if (idx == 0)
	{
		node->next = *h;
		node->prev = NULL;
		if (node->next)
			node->next->prev = node;
		return (node);
	}

	while (temp)
	{
		if (idx == count)
		{
			node->next = temp;
			temp->prev->next = node;
			node->prev = temp->prev;
			temp->prev = node;
			return (node);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
