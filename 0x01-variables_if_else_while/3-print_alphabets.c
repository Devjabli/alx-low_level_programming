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
	char ST = 'A';

	while (st <= 'z')
	{
		putchar(st);
		st++;
	}

	while (ST <= 'Z')
	{
		putchar(ST);
		ST++;
	}
	putchar('\n');

	return (0);
}
