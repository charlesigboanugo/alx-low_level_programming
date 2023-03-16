#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 *
 * Return: void
 */

void print_number(int n)
{
	int divisor;
	unsigned int num, rem;

	if (n < 0)
	{
		num = n * -1;
		_putchar('-');
	}
	else
	{
		num = n;
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

}
