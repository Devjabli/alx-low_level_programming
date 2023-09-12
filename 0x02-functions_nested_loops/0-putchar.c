#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: 0 (success)
 */


int main(void)
{
	char st[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(st[i]);
	}
	_putchar('\n');

	return (0);
}
