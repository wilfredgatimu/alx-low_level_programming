#include "dog.h"
#include <stdio.h>
/**
  * print_dog - it helps in printing a struct dogs
  * @d: the pointer variable to struct dogs
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";
	printf("Name: %s\nAge: %.1f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
