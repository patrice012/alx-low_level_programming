#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
  * create_array - creates an array of chars,
  * and initializes it with a specific chari.
  * @size: size of the array
  * @c: charactere
  * Return: pointer of char
  */


char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
