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
	if (min > max)
		return (NULL);

	int *result = malloc(sizeof(int) * (max - min + 1));

	if (result == NULL)
		return (NULL);

	for (int i = 0; i <= (max - min); i++)
	{
		result[i] = min + i;
	}
	return (result);
}


