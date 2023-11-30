#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - return parameters as separator and n
 * @separator: the string to be printed among strings
 * @n: number of strings passed to the function
 * @...: variable number of strings to print
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *x;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, const char *);

		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
