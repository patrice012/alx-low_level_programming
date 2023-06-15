#include "lists.h"

/**
  * add_dnodeint - add node at the beginning
  * @head: head of the list
  * @n: new node data
  * Return: the address of the new element, or NULL if it failed
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* create and set new node data */
	dlistint_t *node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (node)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = node;
	/* insert at the first place */
	*head = node;
	return (node);
}

