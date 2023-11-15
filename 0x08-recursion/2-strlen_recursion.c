#include "main.h"

/**
 * _strlen_recursion - main function
 *
 * @s: paramter function
 *
 * Return: i
*/

int _strlen_recursion(char *s)
{
	int i  = 0;

	if (*s != 0)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
