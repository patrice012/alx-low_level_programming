#include "lists.h"

/**
  * free_listint2 -  a function that frees a listint_t list.
  * @head: pointer to struct
  * Return: Nothing
  */


void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(head);
}
