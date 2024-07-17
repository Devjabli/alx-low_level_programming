#include "search_algos.h"

/**
 * binary_search - it searching for a value in an interger array using binary
 * @array: list of element in array
 * @size: length of element array
 * @value: value as searching for
 * Return:index with it value or -1
*/

int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	int mid, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (l <= r)
	{
		mid = l + (r - l) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	return (-1);
}
