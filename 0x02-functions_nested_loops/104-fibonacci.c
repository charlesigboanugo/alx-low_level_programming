#include <stdio.h>

/**
 * main - prints the sum of all even Fibonacci numbers below 4000000
 *
 * Return: Always 0.
 */

int main(void)
 {
	int count;
	unsigned long prev, last, sec_last, limit, ten_thousands, thousands, hundreds, tens, unit;	
	count = 0;
	printf("1, 2, ");
	last = 2;
	sec_last = 1;
	limit = 1800000000000000000;
	while (count <= 95)
	{
		prev = last;
		last = last + sec_last ;
		sec_last = prev;
		if (last > limit)
		{
		       	ten_thousands = last / 10000;
			thousands = (last % 10000) / 1000;
			hundreds = ((last % 10000) % 1000) / 100;   
			tens= (((last % 10000) % 1000) % 100) / 10;
			unit= (((last % 10000) % 1000) % 100) % 10;

			printf("%lu", ten_thousands);
			printf("%lu", thousands);
			printf("%lu", hundreds);
			printf("%lu", tens);
			printf("%lu", unit);
		}
		else
		{
			 printf("%lu", last);
		}
		if (count != 95)
		{
			 printf(", ");
		}
		count++;
	}

	printf("\n");

	return (0);
}
