#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digit numbers under 10
 *
 * Return: 0 (success)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar('0' + digit);
		digit++;
	}

	putchar('\n');
	return (0);
}
