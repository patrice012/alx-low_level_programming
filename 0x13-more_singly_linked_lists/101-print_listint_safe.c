#include "lists.h"

/**
  * print_listint_safe -  function that prints a listint_t linked list.
  * @head: pointer to struct
  * Return: Nothing
  */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head, *temp2 = NULL;
	size_t i;

	if (!temp)
		return (-1);

	i = 0;
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)(temp), (temp)->n);
		i++;
		temp2 = temp;
		temp = temp->next;

		if (temp2 <= temp)
		{
			printf("-> [%p] %d\n", (void *) temp, temp->n);
			exit(98);
		}
	}
	return (i);
}
