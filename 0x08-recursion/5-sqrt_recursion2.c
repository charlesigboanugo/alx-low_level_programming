#include "main.h"
#include <stdio.h>

/**
 * check_int - checks integer as candidate for square root
 * @square: square integer
 * @x: integer
 * Return: 1 if
 */

int _sqrt_recursion(int n)
{
	int i, j, k, sqr, w;
	int arr[30];
	
	i = 2;
	k = n;
	j = 0;
	while (i <= n/2)
	{
		if (k % i == 0)
		{
			k = k / i;
			arr[j] = i;
			j++;
		}
		else{
		i++;
		}
	}
	
	i = 0;
	while (i < j)
	{
		printf("%d", arr[i]);
		i++;
	}

	sqr = 1;
	i = 0;
	while (i < j)
	{
		w = i + 1;
		while (w < j && arr[i] != 1)
		{
			if (arr[i] == arr[i] && arr[w] != 1)
			{
				sqr *= w;
				arr[i] = 1;
				arr[w] = 1;
				break;
			}
			w++;
		}
		i++;
	}
		printf("sqr = %i", sqr);
	return (-1);
}
