#include "main.h"
#include "limits.h"

/**
* power - gets decimal places of an integer
* @n: an integer
*
* Return: decimal place
*/

int power(int n)
{
	int place;

	place = 1;
	for (; n > 9; )
	{
		n = n / 10;
		place *= 10;
	}

	return (place);
}

/**
 * print_number - prints an integer
 * @n: number to print
 *
 * Return: void
 */

void print_number(int n)
{
	int divisor, rem, place, num, cut;

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
	divisor = power(num);
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
