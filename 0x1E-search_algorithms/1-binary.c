#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"

/**
* _print - Helper function used to print array's element.
* @array: The array to be printed.
* @size: The size of the array.
*/
void _print(int *array, size_t size)
{
	size_t i = 0;

	printf("Searching in array: ");
	while (i < size)
	{
		printf("%d", array[i]);
		if (i < size - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}

/**
* binary_search - Searches for a value in a sorted array
* of integers using the Binary search algorithm.
* @array: The sorted array to search in.
* @size: The size of the array.
* @value: The value to search for.
*
* Return: The index of the value in the array, or -1 if not found.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid = left + (right - left) / 2;

	if (array == NULL)
		return (-1);
	_print(array, size);
	if (mid && mid % 2 == 0)
		mid--;



	while (left <= right)
	{
		mid = left + (right - left) / 2;


		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (-1);
		}
		if (left <= right)
		{
			_print(&array[left], right - left + 1);
		}
	}
	return (-1);
}
