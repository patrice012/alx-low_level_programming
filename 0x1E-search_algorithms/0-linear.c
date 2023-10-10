#include "search_algos.h"


/**
 * linear_search - function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value is the value to search for
 * Return:  the first index where value is located, return -1 if
 * value is not present in array or if array is NULL
 */


int linear_search(int *array, size_t size, int value)
{
	int i = 0;
	int len = (int)size;

	for (i = 0; i < len; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
