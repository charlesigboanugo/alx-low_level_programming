#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
* Return: Always 0.
*/

int main(void)
{
	int count;
	unsigned long prev, last, sec_last, limit;
	unsigned long cut_1 cut_2;

	count = 3;
	printf("1, 2, ");
	last = 2;
	sec_last = 1;
	limit = 10000000000000000000;
	cut_1 =
	cut_2 =
	cut_3 =
	cut_4 =
	while (count <= 98)
	{
		if (last + sec_last > limit)
		{
			cut_1 = last / limit;
			cut_2 = last % limit;
			cut_3 = sec_last / limit;
			cut_4 = sec_last % limit;
			print("%lu%lu", cut_1 + cut_3, cut_2 + cut_4)		
		}
		else
		{
			prev = last;
			last = last + sec_last;
			sec_last = prev;
			printf("%lu, ", last);

		}
		count++;
	}

	printf("\n");

	return (0);
}
