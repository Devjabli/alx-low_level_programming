#include <stdio.h>
#include "main.h"


/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The starting value of the array.
 * @max: The ending value of the array.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
*/

int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;

	return (ptr);
}


