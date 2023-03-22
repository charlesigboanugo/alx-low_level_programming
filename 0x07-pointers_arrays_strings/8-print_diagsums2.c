#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;
	int tsize = size * size;
	int gap1 = size + 1;
	int gap2 = size - 1;

	sum1 = sum2 = 0;
	i = 0;
	while (i < tsize)
	{
		sum1 += *(a + i);
		i = i + gap1;
	}

	i = tsize - size;
	while (i >= 0)
	{
		sum2 += *(a + i);
		i = i - gap2;
	}

	printf("%d, %d\n", sum1, sum2);
}
