#include "lists.h"

/**
  * insert_dnodeint_at_index - insert at any position
  * @h: head of the list
  * @idx: index of the element to insert
  * @n: new node data
  * Return: the new node
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp = *h, *node;

	node = malloc(sizeof(dlistint_t));
	if (h == NULL || node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL, node->prev = NULL;
	if (idx == 0)
	{
		node->next = *h;
		*h = node;
		if (node->next)
			node->next->prev = node;
		return (node);
	}
	while (temp)
	{
		if (idx == count)
		{
			if (temp->next == NULL)
			{
				temp->next = node;
				node->prev = temp;
			}
			else
			{
				node->next = temp;
				temp->prev->next = node;
				node->prev = temp->prev;
				temp->prev = node;
			}
			return (node);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
