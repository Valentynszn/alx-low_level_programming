#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Allocated memory for a struct dog is freed
 * @d: struct dog to be freed
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
