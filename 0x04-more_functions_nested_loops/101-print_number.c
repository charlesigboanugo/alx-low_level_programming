#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 * Return void
 */

void print_number(int n)
{
	int divisor, rem, place, num;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	num = n;
	place = 1;
	for (; num > 9; )
	{
		num = num / 10;
		place *= 10;
	}

	divisor = place;
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
