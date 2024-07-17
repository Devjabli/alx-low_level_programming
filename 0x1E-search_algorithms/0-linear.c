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

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
	}
	return (-1);
}
