#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
* Return: Always 0.
*/

int main(void)
{
	unsigned long temp2, last, sec_last;
	unsigned long cut1A, cut1B, cut2A, cut2B, left, right;
	int count, temp;

	count = 3;
	printf("1, 2, ");
	last = 2;
	sec_last = 1;
	while (count <= 98)
	{
		if (last + sec_last  > 10)
		{
			right = (cut1B + cut2B) % 10;
			temp = (cut1B + cut2B) / 10;
			left = (cut1A + cut2A) + temp;
			printf("%lu%lu", left, right);
			cut1A = cut2A;
			cut1B = cut2B;
			cut2A = left;
			cut2B = right;
		}
		else
		{
			temp2 = last;
			last = last + sec_last;
			sec_last = temp2;
			printf("%lu", last);
			cut2A = last / 10;
			cut2B = last % 10;
			cut1A = sec_last / 10;
			cut1B = sec_last % 10;
		}
		if (count < 98)
			printf(", ");
		count++;
	}
	printf("\n");
	return (0);
}
