#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Retruns the sum of two numbers
 * @a: integer
 * @b: integer
 * Return: the sum of a and b.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Retruns the substraction of two numbers
 * @a: integer
 * @b: integer
 * Return: the substraction of a and b.
*/


int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Retruns the multiply of two numbers
 * @a: integer
 * @b: integer
 * Return: the multiply of a and b.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Retruns the division of two numbers
 * @a: integer
 * @b: integer
 * Return: the division of a and b.
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Retruns the mod of two numbers
 * @a: integer
 * @b: integer
 * Return: the mod of a and b.
*/

int op_mod(int a, int b)
{
	return (a % b);
}
