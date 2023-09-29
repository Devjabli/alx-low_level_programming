#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: return the factorial
 *
 * Return: factorial => n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

