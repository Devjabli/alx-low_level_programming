#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print anything
 * @format: numbers of args
*/

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *x;

	va_start(args, format);

	while (format && format[i])
	{
		if (i > 0)
			printf(", ");

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				x = va_arg(args, char *);
				if (x == NULL)
					x = "(nil)";
				printf("%s", x);
				break;
		}
		i++;
	}
	va_end(args);

	printf("\n");
}
