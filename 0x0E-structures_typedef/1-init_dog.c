#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function takes parameter of struct dog
 *
 * @d: pointer struct
 * @name: char pointer
 * @age: float
 * @owner: char pointer
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
