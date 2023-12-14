#include "main.h"


/**
 * binary_to_uint - converts number string binary to unsigned int
 * @b: binary string pointer
 *
 * Return: (n)
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = n * 2 + (*b++ - '0');
	}
	return (n);
}
