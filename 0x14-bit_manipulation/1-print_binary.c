#include "main.h"

/**
 * print_binary - print n as binary string
 * @n: number print
 *
 * Return: void
*/

void print_binary(unsigned long int n)
{
	int size_bit = sizeof(n) * 8;
	int i = 0;

	while (size_bit)
	{
		if (n & 1L << --size_bit)
		{
			_putchar('1');
			i++;
		}
		else if (i)
		{
			_putchar('0');
		}
	}
	if (!i)
		_putchar('0');
}
