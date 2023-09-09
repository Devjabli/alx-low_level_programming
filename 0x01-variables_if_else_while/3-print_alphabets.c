#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabets in lowercase then in uppercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	char st = 'n';
	char st = 'A';

	while (st <= 'z')
	{
		putchar(st);
		st++;
	}

	while (st <= 'z')
	{
		putchar(st);
		st++;
	}
	putchar('\n');

	return (0);
}
