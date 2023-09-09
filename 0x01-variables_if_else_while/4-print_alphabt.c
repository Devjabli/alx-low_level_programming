#include <stdio.h>

/**
 * main - entry point
 *
 * Description: show all alphabets in lowercae except q and e
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	char st = 'a';

	while (st <= 'z')
	{
		if (st != 'e' && st != 'q')
		{
			putchar(st);
		}
		st++;
	}

	putchar('\n');
	return (0);
}
