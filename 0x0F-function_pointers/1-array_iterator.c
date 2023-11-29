#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function takes array
 * and size and pointer func as a paramters
 * @array: array
 * @size: is a typedef
 * @action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		;
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
