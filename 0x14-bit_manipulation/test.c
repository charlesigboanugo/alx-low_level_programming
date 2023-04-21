#include <stdio.h>
#include "main.h"

/**
*print_binary - prints the binary form of a number
* @n: an unsigned int
*
* Return: void
*/
void print_binary(unsigned long int n)
{
	if ((n >> 1) > 0)
		print_binary(n >> 1);
	printf("%lu", n - ((n >> 1) << 1));
}
