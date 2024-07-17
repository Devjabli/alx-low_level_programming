#include "search_algos.h"

/**
 * linear_search - searching for a value in array
 * using Linear search algorithm
 *
 * @array: input array
 * @size: size of array
 * @value: value to find in array
 * Return: EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
