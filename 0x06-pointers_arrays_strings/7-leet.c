#include "main.h"

/**
* leet - encodes a string into 1337
* @s: a string
*
* Return: a pointer to a string
*/

char *leet(char *s)
{
	int i, j;
	char str[] = "a4e3o0t7l1";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j <= 8)
		{
			if (s[i] == str[j] || s[i] == (str[j] - 32))
			{
				s[i] = str[j + 1];
			}
			j += 2;
		}
		i++;
	}

	return (s);
}
