#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print a quote using write function
 *
 * Return: 1 (error).
*/

int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, 59);
	return (1);
}
