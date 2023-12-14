#include "main.h"


/**
 * get_bit - get bit at the index
 * @n: number to index
 * @index:  bit to get
 *
 * Return: bit state or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n);

	if (index >= size * 8)
		return (-1);
	return (n >> index & 1);
}
