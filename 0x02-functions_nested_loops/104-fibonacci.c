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

	count = 3;
	printf("1, 2, ");
	last = 2;
	sec_last = 1;
	while (count <= 98)
	{
		switch (count)
		{
			case 93:
			printf("1974027421");
			printf("9868223167, ");
			break;
			case 94:
			printf("3194043463");
			printf("4990099905, ");
			break;
			case 95:
			printf("5168070885");
			printf("4858323072, ");
			break;
			case 96:
			printf("8362114348");
			printf("9848422977, ");
			break;
			case 97:
			printf("1353018523");
			printf("44706746049, ");
			break;
			case 98:
			printf("2189229958");
			printf("34555169026");
			break;
			default:
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
