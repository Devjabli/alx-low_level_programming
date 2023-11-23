#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0,
 * or if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	unsigned int total_size = nmemb * size;

	if (nmemb != total_size / size)
		return (NULL);

	void *ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (unsigned int i = 0; i < total_size; i++)
	{
		((char *)ptr)[i] = 0;
	}
	return (ptr);
}

