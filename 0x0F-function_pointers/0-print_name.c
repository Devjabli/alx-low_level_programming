#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - takes char name and function pointer f as a paramters
 * @f: function pointer
 * @name: char pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL && name != NULL)
		;
	else
		f(name);
}
