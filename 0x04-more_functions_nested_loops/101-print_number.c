#include "main.h"
#include "limits.h"

/**
 * print_number - prints an integer
 * @n: number to print
 *
 * Return: void
 */

void print_number(int n)
{
	int divisor, rem, num, cut;

	cut = 0;
	num = n;
	if (n == INT_MIN)
	{
		num = INT_MAX / 10;
		cut = 1;
		_putchar('-');
	}

	if (n < 0 && n > INT_MIN)
	{
		num = n * -1;
		_putchar('-');
	}
	rem = num;

	divisor = 1;
	for (; num > 9; )
	{
		num = num / 10;
		divisor *= 10;
	}

	while (divisor >= 10)
	{
		_putchar('0' + (rem / divisor));
		rem %= divisor;
		divisor /= 10;
	}
	_putchar('0' + rem);

	if (cut == 1)
		_putchar('0' + 8);
}
