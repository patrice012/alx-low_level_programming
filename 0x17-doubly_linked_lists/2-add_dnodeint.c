#include "lists.h"

/**
  * add_dnodeint - add node at the beginning
  * @head: head of the list
  * @n: new node data
  * Return: the address of the new element, or NULL if it failed
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	if (new_node->next)
		new_node->next->prev = new_node;
	return (new_node);
}

