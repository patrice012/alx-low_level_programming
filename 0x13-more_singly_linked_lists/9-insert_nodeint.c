#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: pointer to struct
  * @idx:  index of the list where the new node should be added.
  * Index starts at 0
  * @n: data of the new node
  * Return: the address of the new node or NULL if it failed.
  */


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp;

	/* create new node */
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	/* set new node data */
	new->n = n;
	new->next = NULL;

	/* add at the beginning of the list if head == NULL or index == 0 */
	if ((*head) == NULL || idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	/* get the element at the given index */
	temp = *head;

	while (i < idx - 1 && temp->next)
	{
		temp = temp->next;
		i++;
	}

	/* if i < index => add to the end of the list */
	if (i < idx && temp->next == NULL)
	{
		temp->next = new;
	}
	else
	{
		new->next = temp->next;
		temp->next = new;
	}

	return (new);
}
