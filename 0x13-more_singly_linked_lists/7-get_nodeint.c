#include "lists.h"


/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list.
  * @head: a pointer to struct
  * @index: the index of the node to find
  * Return: the node or if the node does not exist, return NULL
  */



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	if (!head)
		return (NULL);

	while (temp)
	{
		if (i == index)
		{
			return (temp);
		}
		i++;
		temp = temp->next;
	}

	return (NULL);
}

