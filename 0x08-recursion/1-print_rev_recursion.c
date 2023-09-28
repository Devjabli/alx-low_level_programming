#include "main.h"


/**
 * _print_rev_recursion - print reverse string
 *
 * @s: for input
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

