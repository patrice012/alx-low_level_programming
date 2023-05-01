#include "lists.h"

/**
  * sum_listint - sum of all the data (n) of a listint_t linked list.
  * @head: pointer of struct
  * Return: the sum of all the data
  */


int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (!head)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
