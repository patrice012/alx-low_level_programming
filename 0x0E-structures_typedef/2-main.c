#include <stdio.h>
#include "dog.h"

/**
  * main - The entry point of the program
  * Return: int .
 */
int main(void)
{
	struct dog my_dog;
	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	print_dog(&my_dog);
	return (0);
}
