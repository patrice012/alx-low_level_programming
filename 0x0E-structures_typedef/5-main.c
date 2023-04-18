#include <stdio.h>
#include "dog.h"

/**
  * main - The entry point of the program
  * Return: int .
 */
int main(void)
{
	dog_t *my_dog;
	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	free_dog(my_dog);
	return (0);
}
