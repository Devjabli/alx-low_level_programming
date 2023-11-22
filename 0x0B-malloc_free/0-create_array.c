#include "main.h"


/**
 * *create_array - creating an array from chars.
 *
 * @size: size of the array
 * @c: char to initialize
 * Return: pointerto the array initialized or return Null
*/


char *create_array(unsigned int size, char c)
{
	char *n;

	n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
	{
		n[size] = c;
	}
	return (n);
}
