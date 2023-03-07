#include <stdio.h>

/**
* print_array - prints n elements of an array of integers.
* @a: an array
* @n: an integer
*
* Return: void
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (i < n && a[i] != '\0')
		{
			printf("%d", a[i]);

			if (i != n - 1)
			{
				printf(", ");
			}
			i++;
		}

	}
	printf("\n");
}
