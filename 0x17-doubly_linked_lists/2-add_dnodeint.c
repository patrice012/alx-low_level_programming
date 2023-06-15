#include "lists.h"

/**
  * add_dnodeint - add node at the beginning
  * @head: head of the list
  * @n: new node data
  * Return: the address of the new element, or NULL if it failed
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	temp = *head;

	if (new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}

	new_node->next = temp;

	if (temp != NULL)
		temp->prev = new_node;
	*head = new_node;
	printf("func");
	return (new_node);
}

