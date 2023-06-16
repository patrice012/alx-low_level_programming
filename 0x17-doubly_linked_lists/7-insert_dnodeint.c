#include "lists.h"

void _insert(dlistint_t **node, dlistint_t **temp);

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
	dlistint_t *temp, *node;

	node = malloc(sizeof(dlistint_t));
	if (h == NULL || node == NULL)
		return (NULL);
	node->n = n;
	temp = *h;

	if (idx == 0)
	{
		node->next = *h;
		node->prev = NULL;
		if (*h)
			(*h)->prev = node;
		*h = node;
		return (node);
	}

	while (temp)
	{
		if (idx == count)
		{
			_insert(&node, &temp);
			return (node);
		}
		temp = temp->next;
		count++;
	}
	if (idx == count)
	{
		_insert(&node, &temp);
		return (node);
	}
	free(node);
	return (NULL);
}


/**
  * _insert - helper function
  * @node: node to insert
  * @temp: current element
  */

void _insert(dlistint_t **node, dlistint_t **temp)
{
	(*node)->next = *temp;
	(*node)->prev = (*temp)->prev;
	(*temp)->prev->next = *node;
	(*temp)->prev = *node;
}
