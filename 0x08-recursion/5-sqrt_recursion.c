#include "main.h"

/**
 * check_int - checks integer as candidate for square root
 * @sqr: square of integer
 * @x: integer
 * Return: square root unless x is less than 1
 * or not a perfect square
 */

int check_int(int x, int sqr)
{
	if (sqr * sqr > x || x < 1)
		return (-1);
	if (sqr * sqr == x)
		return (sqr);
	return (check_int(x, ++sqr));
}

/**
 * _sqrt_recursion - gets the natural square root of a number.
 * @n: an integer number
 *
 * Return: the square root of n if n is a perfect square else return -1
 */

int _sqrt_recursion(int n)
{
	int sqrt_check;

	sqrt_check = check_int(n, 1);

	return (sqrt_check);
}

