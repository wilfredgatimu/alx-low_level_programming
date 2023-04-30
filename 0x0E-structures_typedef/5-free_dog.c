#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - it frees the memories that are allocated for a struct dog
 * @d: the struct dogs to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
