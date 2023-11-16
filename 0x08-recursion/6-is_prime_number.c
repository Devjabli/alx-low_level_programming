#include "main.h"

int rec_prime(int n, int i);

/**
 * is_prime_number - if an integer is a prime number or not
 *
 * @n: number to evaluate
 *
 * Return: (1) if (n) is a prime number
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (rec_prime(n, n + 1));
}

/**
 * rec_prime - calculating if a number is prime recursively
 *
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime or not
*/

int rec_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (rec_prime(n, i - 1));
}
