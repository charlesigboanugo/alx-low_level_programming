#include <stdio.h>
#include "main.h"

/**
* _islower - A function that checks for lowercase character
* @c: c is an integral charcater
* Return: returns 1 if c is lowercase and 0 otherwise
*/

void print_number(int n)
{
	int abs_int, remainder, pow_of_int, whole_num, divisor;

	if (n != 0)
	{
		if (n < 0)
		{
			abs_int = -1 * n;
			_putchar('-');
		}
		else 
		{	
			abs_int = n;
		}

		pow_of_int = 1;
		whole_num = abs_int;
		while (whole_num > 0)
		{
			if (whole_num / 10 >= 1)
			{
				pow_of_int *= 10;
			}
			
			whole_num = whole_num / 10;

		}

		divisor = pow_of_int;
		remainder = abs_int;
		while (divisor >= 1)
		{
			_putchar('0' + remainder / divisor);
			remainder = remainder % divisor;
			divisor /= 10;
		}
		

	}
	
	else
	{
		_putchar('0');
	}

	_putchar('\n');


}

/**
* main - calls a function that checks for lowercase character.
* Return: Always 0.
*/

int main(void)
{
	print_number(98);
	_putchar('\n');
	print_number(402);
	_putchar('\n');
	print_number(1024);
	_putchar('\n');
	print_number(0);
	_putchar('\n');
	print_number(-98);
	_putchar('\n');
	print_number(-9890845);
	_putchar('\n');
	print_number(26057);
	_putchar('\n');
	print_number(9081);
	_putchar('\n');
	print_number(-6);
	_putchar('\n');
	return (0);
}
