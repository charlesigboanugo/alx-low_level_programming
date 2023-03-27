#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to allocated memory
 */

int *array_range(int min, int max)
{
	int *arr, *ptr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max - min + 1));

	if (!arr)
		return (NULL);

	ptr = arr;
	for (; min <= max; min++, ptr++)
		*ptr = min;

	return (arr);

}
