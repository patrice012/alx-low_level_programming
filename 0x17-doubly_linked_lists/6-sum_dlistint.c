#include "lists.h"

/**
  * sum_dlistint - sum of all of the data
  * @head: head of the list
  * Return: the sum or 0 if the list is empty
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (temp == NULL)
		return (sum);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
