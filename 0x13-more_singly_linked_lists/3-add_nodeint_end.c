#include "lists.h"


/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: pointer to listint_t struct
  * @n: input element data type
  * Return: the new element
  */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;
	return (new);
}
