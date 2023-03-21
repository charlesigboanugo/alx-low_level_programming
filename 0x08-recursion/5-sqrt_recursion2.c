#include "main.h"
#include <stdio.h>

/**
 * check_int - checks integer as candidate for square root
 * @sqr: square of integer
 * @x: integer
 * Return: 1 if
 */

int check_int(int x, int sqr)
{
	if (sqr * sqr > x || x < 1)
		return (-1);
	if (sqr * sqr == x)
		return (sqr);
	check_int(x, ++sqr);
}
int _sqrt_recursion(int n)
{
	int sqrt_check;

	sqrt_check = check_int(n, 1);

	return (sqrt_check);
}

