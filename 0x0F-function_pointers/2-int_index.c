#include "function_pointers.h"


/**
 * int_index - function takes array pointer and size
 * and function pointer cmp as an argument.
 * @array: array pointer
 * @size: integer
 * @cmp: pointer function
 * Return: return i if there is size or return (-1) if NULL
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL || cmp != NULL || size <= 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
