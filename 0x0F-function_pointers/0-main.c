#include <stdio.h>
#include "function_pointers.h"

/**
* print_name_as_is - the function name
* @name: parameter of type char *.
* Return: void .
*/
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}
/**
* print_name_uppercase - the function name
* @name:
* Return:
*/
void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("Hello, my uppercase name is ");
	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}
}
/**
* main - The entry point of the program
* Return:
*/
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
	return (0);
}
