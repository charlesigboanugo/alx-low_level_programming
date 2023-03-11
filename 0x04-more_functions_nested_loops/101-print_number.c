#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 * Return void
 */

void print_number(int n)
{
	int divisor, rem, place, num;

	num = n;
	if (n < 0)
	{
		num = n * -1;
		_putchar('-');
	}

	rem = num;
	place = 1;
	for (; num > 9; )
	{
		num = num / 10;
		place *= 10;
	}

	divisor = place;
	while (divisor >= 10)
	{
		_putchar('0' + (rem / divisor));
		rem %= divisor;
		divisor /= 10;
	}
	_putchar('0' + rem);
}
