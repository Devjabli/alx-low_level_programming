#include "main.h"

/**
 * _strlen - returns the length
 * @c: string lead for length to check
 *
 * Return: int length
*/

int _strlen(char *c)
{
	int i = 0;

	if (!c)
		return (0);
	while (*c++)
		i++;
	return (i);
}
