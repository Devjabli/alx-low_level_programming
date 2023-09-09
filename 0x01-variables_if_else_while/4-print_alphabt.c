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
	char first_letter = 'a';

	while (first_letter <= 'z')
	{
		if (first_letter != 'e' && first_letter != 'q')
		{
			putchar(firt_letter)
		}
		first_letter++;
	}

	putchar('\n');
	return (0);
}
