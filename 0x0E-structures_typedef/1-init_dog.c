#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - it initializes the variables of the type struct dogs
 * @d: it is a pointer to the struct dog to initialize
 * @name: a name to initialize
 * @age: the age to initialize
 * @owner: the owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
}
