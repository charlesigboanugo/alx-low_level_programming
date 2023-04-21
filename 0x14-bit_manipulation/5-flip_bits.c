#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
* flip_bits - the number of bits you would need to flip to get from
* one number to another
* @n: a first number
* @m: a second numer
*
* Return: number of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num;
	unsigned long int c;

	n = n ^ m;
	if (n == 0)
		return (0);
	for (num = 0, c = 1ul << 63; c != 0; c >>= 1)
{
		if (c & n)
			num++;
	}
	return (num);
}
