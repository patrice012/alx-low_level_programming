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

	temp = *head;
	*head = (*head)->next;
	temp->next = NULL;
	return (temp->n);
}
