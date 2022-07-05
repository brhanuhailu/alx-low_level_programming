#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	struct dog my_dog;
	if (d != NULL)
	{
		my_dog.name="nil";
	}
	else
	{
		my_dog.name="";
	}
	print_dog($my_dog);
	return (0);
}
