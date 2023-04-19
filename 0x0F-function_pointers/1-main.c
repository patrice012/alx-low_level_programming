#include <stdio.h>
#include "function_pointers.h"

/**
  * print_elem - the function name
  * @elem: parameter of type int .
  * Return: void .
 */
void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
  * print_elem_hex - the function name
  * @elem: parameter of type int .
  * Return: void .
 */
void print_elem_hex(int elem)
{
	printf("0x%x\n", elem);
}

/**
  * main - The entry point of the program
  * Return: int .
 */
int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};

	array_iterator(array, 5, &print_elem);
	array_iterator(array, 5, &print_elem_hex);
	return (0);
}
