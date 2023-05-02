#include "lists.h"

/**
  * reverse_listint -  reverses a listint_t linked list
  * @head: pointer to struct
  * Return: the reverse list
  */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *tmp2 = NULL;

	while ((*head) != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = tmp2;
		tmp2 = *head;
		*head = tmp;
	}
	(*head) = tmp2;
	return (*head);
}
