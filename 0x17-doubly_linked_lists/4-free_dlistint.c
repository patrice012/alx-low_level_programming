#include "lists.h"

/**
  * free_dlistint - frees a dlistint_t list.
  * @head: list head
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp)
	{
		head  = temp->next;
		free(temp);
		temp = head;
	}
}
