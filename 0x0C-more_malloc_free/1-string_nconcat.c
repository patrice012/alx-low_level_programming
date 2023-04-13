#include <stdlib.h>
#include "main.h"

/**
  * _len - the function name
  * @str: parameter of type char *.
  * Return: int .
 */
int _len(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _len(str + 1));
}
/**
* string_nconcat - function that concatenates two strings.
* @s1: first string parameter
* @s2: second string parameter
* @n:number of s2 bytes to copy
* Return: pointer to new concatenate string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, len3, i, j;
	char *s3;

	/* get length */
	len1 = _len(s1);
	len2 = _len(s2);

	/* required memory space */
	if (n < len2)
		len3 = len1 + n + 1;
	else
		len3 = len1 + len2 + 1;

	s3 = malloc(sizeof(char) * len3);
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* copy s1 */
	for (i = 0; i < len1; i++)
	{
		*(s3 + i) = *(s1 + i);
	}
	/* copy s2 */
	for (j = 0; j < len3 - len1; j++)
	{
		if (s2[j] == '\0')
		{
			break;
		}
		*(s3 + i + j) = *(s2 + j);
	}
	s3[i + j] = '\0';

	return (s3);
}
