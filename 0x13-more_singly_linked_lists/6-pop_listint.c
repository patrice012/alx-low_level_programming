#include "lists.h"

/**
  * pop_listint - a function that deletes the head node of a listint_t
  * linked list, and returns the head node’s data (n).
  * @head: pointer to struct
  * Return: Nothing
  */


int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
