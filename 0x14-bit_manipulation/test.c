#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* get_bit - gets the value of bit at a given index
* @n: a number
* @index: index of bit
*
* Return: the value of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int c = 1ul << index;

	if (index > 63)
		return (-1);
	if (c & n)
		return (1);
	else
		return (0);
}
