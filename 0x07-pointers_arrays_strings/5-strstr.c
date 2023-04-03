#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: pointer to string
 * @needle: substring
 * Return: pointer to s if true else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (needle[i])
	{
		j = 0;

		while (haystack[j])
		{
			if (haystack[j] == needle[i])
				return (&haystack[j]);
			j++;
		}
		i++;
	}

	return (NULL);
}
