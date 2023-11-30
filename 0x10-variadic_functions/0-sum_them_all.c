#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of parameters
 * @...: Variable number of parameters
 *
 * Return: Sum of all parameters, or 0 if n is 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; ++i)
	{
		total += va_arg(args, int);
	}
	va_end(args);

	return (total);
}

