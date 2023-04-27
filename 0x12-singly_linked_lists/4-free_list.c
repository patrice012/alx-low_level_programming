#include "lists.h"
#include <stdlib.h>

/**
  * free_list - a function that frees a list_t list.
  * @head: list to free
  * Return: None
  */

void free_list(list_t *head)
{
	free(head->str);
	free(head->next);
	free(head);
}
