#include "lists.h"


/**
  * add_nodeint - adds a new node at the beginning of a listint_t list
  * @head: pointer to head
  * @n: the new element data
  * Return: pointer to the new element
  */


listint_t *add_nodeint(listint_t **head, const int n)
{
	/* create new element */
	listint_t *new = malloc(sizeof(listint_t));
	/* check if the operation fail */
	if (!new)
		return (NULL);
	/* set the data */
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
