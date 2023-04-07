
#include "main.h"

/**
 * check - checks for the square root
 * @a:int
 * @b:int
 * Return: int
 */

int check(int c, int d)
{
	if (c * c == d)
		return (c);
	if (c * c > d)
		return (-1);
	return (check(c + 1, d));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
