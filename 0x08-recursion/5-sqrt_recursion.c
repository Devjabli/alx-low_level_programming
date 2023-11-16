#include "main.h"
int rec_sqrt_recursion(int n, int i);


/**
 * _sqrt_recursion - returns square root
 *
 * @n: parameter function
 *
 * Return: rec_sqrt_recursion
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (rec_sqrt_recursion(n, 0));
}

/**
 * rec_sqrt_recursion - recurses the result
 *
 * @n: value of squar
 * @i: iterator
 *
 * Return: resutling square
*/

int rec_sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (rec_sqrt_recursion(n, i + 1));

}
