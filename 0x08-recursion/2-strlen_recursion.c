#include "main.h"

/**
 * _strlen_recursion - every time call it add it and return lenght a string.
 *
 * @s: total of the length of the string.
 *
 * Return: length.
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}

	return (n);
}

