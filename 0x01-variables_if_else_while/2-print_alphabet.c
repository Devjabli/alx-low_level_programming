#include <stdio.h>

/**
 * main - entry point
 *
 * Description: show alphabet sorted letters
 *
 * Return: 0 (success)
 */

int main(void)
{
	char st = 'a';

	while (st <= 'z')
	{
		putchar(st);
		st++;
	}
	putchar("\n");

	return (0);
}
