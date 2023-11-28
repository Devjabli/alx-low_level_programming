#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function return parameter struct dog
 *
 * @d: pointer struct
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->owner == NULL)
			printf("(nil)");

		if (d->name == NULL)
			printf("Name: (nil)\n");
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
