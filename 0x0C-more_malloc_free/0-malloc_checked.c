#include "main.h"


/**
 * *malloc_checked - memory allocated by using malloc
 * @b: unsigned int
 * Return: pointer to array
*/


void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);
	return (m);
}
