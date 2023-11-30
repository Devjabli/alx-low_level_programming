#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers by a separator
 * @separator: the string that printed between numbers
 * @n: number of integer passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		int x = va_arg(args, int);

		printf("%d", x);

		if (separator != NULL && i < n - 1 )
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
