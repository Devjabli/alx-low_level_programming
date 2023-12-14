#include "main.h"

/**
 * clear_bit - set val bit to 0 as an index
 * @n: param pointer
 * @index: index
 * Return: 1 if success, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(n);

	if (index > size * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

