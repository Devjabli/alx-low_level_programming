#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lowercase but in reverse
 *
 * Return: 0 (success)
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');
	return (0);
}
