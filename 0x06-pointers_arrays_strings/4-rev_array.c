#include "main.h"

/**
* reverse_array - reverses the content of an array of integers.
* @a: an array
* @n: an integer
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int right, left, c;

	right = n - 1;
	left = 0;
	while (right - left >= 1)
	{
		c = a[right];
		a[right] = a[left];
		a[left] = c;
		right--;
		left++;
	}
}
