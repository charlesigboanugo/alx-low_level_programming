#include "main.h"
#include <stdio.h>

/**
 * check_int - checks integer as candidate for square root
 * @sqr: square of integer
 * @x: integer
 * Return: 1 if
 */

int check_prime(int x, int sqr)
{
	if (sqr * sqr == x || x <= 1)
		return (0);
	if (sqr * sqr > x)
		return (1);
	check_prime(x, ++sqr);
}
int is_prime_number(int n)
{
	int prime_check;

	prime_check = check_prime(n, 2);

	return (prime_check);
}

