#include "search_algos.h"


/**
 * _print - helper function use to print an array
 * @arr: array to print
 */

void _print(int *array)
{
    int i = 0;
    while (array[i])
    {
        printf("%d,", array[i]);
        i++;
    }
}


/**
 * binary_search - function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value is the value to search for
 * Return:  the first index where value is located, return -1 if
 * value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
    int left = 0, right = (int)size - 1, m = 0;


    while (left < right)
    {
        m = (int)(left + right);
        if (array[m] > value)
            right = m;
        else
            left = m + 1;
    }
    return -1;
    
}
