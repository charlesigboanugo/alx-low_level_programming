#include "main.h"
#include <stdio.h>

/**
* infinite_add - encodes a string using rot13
* @n1: a pointer to char
* @n2: a pointer to char
* @r: a buffer
* @size_r: size of buffer
*
* Return: a pointer to a r
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, s, len1, len2, carry;
      	char a, b;
	int max_len;
	len1 = 0;
	while (*n1 != '\0')
	{
		len1++;
		n1++;
	}

	len2 = 0;
	while (*n2 != '\0')
	{
		len2++;
		n2++;
	}
	max_len = len1 > len2 ? len1 : len2;

	s = 0;
	carry = 0;
	i = 0;
	while (i < max_len)
	{
		if (s == size_r - 2)
			return (0);
		if (i >= len1)
			a = 0;
		else
			a = n1[len1 - i - 1] - '0';
			printf("n1 = %c", n1[i]);
			
		if (i >= len2)
		{
			b = 0;
		}
		else
		{
			b = n2[len2 - i - 1] - '0';
		}
		r[s] = (a + b + carry) % 10;
		carry = (a + b + carry) / 10;
		printf("rs = %d\n", r[s]); 
		printf("rstr = %s\n", r); 
	i++;
	s++;
	}
	printf("finalcarry = %d\n", carry);
	return (r);
}
