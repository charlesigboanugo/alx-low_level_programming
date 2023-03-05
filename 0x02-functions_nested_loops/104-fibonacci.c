#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
* Return: Always 0.
*/

int main(void)
{
	int count;
	unsigned long prev, last, sec_last, limit, thousands;
	unsigned long hundreds, tens, unit;

	count = 1;
	printf("1, 2, ");
	last = 2;
	sec_last = 1;
	limit = 1800000000000000000;
	while (count <= 97)
	{
		prev = last;
		last = last + sec_last;
		sec_last = prev;
		if (last > limit)
		{
			thousands = last / 1000;
			hundreds = last % 1000 / 100;
			tens = ((last % 1000) % 100) / 10;
			unit = ((last % 1000) % 100) % 10;

			printf("%lu", thousands);
			printf("%lu", hundreds);
			printf("%lu", tens);
			printf("%lu", unit);
		}
		else
		{
			 printf("%lu", last);
		}
		if (count != 97)
		{
			printf(", ");
		}
		count++;
	}

	printf("\n");

	return (0);
}
