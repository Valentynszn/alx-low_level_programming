#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog variable
 * @d: Pointer to the struct dog to be initialized
 * @name: Name to assign to the dog
 * @age: Age to assign to the dog
 * @owner: Owner's name to assign to the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
