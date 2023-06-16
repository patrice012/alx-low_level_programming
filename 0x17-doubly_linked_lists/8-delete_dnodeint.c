#include "lists.h"

/**
  * delete_dnodeint_at_index - insert at any position
  * @head: head of the list
  * @index: index of the element to insert
  * Return: 1 if it succeeded, -1 if it failed
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	temp = *head;
	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp)
	{
		if (index == count)
		{
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
