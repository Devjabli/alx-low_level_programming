#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point 
 *
 * Description: print a quote using fput function
 *
 * Return: 1 (error).
*/


int main(void)
{       
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
