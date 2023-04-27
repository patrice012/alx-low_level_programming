#include "lists.h"


/**
  * list_len - return the lenght of the input
  * @h: pointer to struct
  * Return: int
  */


size_t list_len(const list_t *h)
{
	if (!(h->next))
		return (1);
	return (1 + list_len(h->next));
}
