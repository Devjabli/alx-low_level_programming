#include <stdio.h>

void printing(void)__attribute__((constructor));

/**
 * printing - fonction excuted at the first
 * function to be excuted
*/


void printing(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
