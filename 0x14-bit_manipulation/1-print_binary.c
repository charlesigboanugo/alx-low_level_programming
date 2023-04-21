#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
*print_binary - prints the binary form of a number
* @n: an unsigned int
*
* Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned char c;

	if ((n >> 1) > 0)
		print_binary(n >> 1);
	if (n - ((n >> 1) << 1))
		c = '1';
	else
		c = '0';
	write(1, &c, 1);
}
