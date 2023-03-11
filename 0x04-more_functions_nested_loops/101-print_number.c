#include "main.h"

/**
 * power - finds decimal places of an integer
 * @num: an integer;
 * Return: result (int)
 */

int  power(int num)
{
	int i, place;

	place = 1;

	for (; num > 9; )
	{
		num = num / 10;
		place *= 10;
	}
	return (place);
}

/**
 * print_number - prints an integer
 * @n: number to print
 * Return void
 */

void print_number(int n)
{
	int divisor, rem;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	divisor = power(n);
	rem = n;
	while (divisor >= 10)
	{
		_putchar('0' + (rem / divisor));
		rem %= divisor;
		divisor /= 10;
	}
	_putchar('0' + rem);
	_putchar(10);
}
