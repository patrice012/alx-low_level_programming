#include "lists.h"

/**
  * free_listint_safe - a function that frees a listint_t list.
  * @h: pointer to struct
  * Return: the size of the list that was free’d
  */

size_t free_listint_safe(listint_t **h)
{
	size_t i;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	i = 0;
	while (*h != NULL)
	{
		if ((*h)->next)
		{
			temp = (*h)->next;
			free(*h);
			i++;
			*h = temp;
		}
		else 
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	return (i);
}
