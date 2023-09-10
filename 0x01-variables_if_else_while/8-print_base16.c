#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all the numbers of base 16
 *
 * Return: 0 (success)
 */

int main(void)
{
	char value[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(value[i]);
	}
	putchar('\n');
	return (0);
}
