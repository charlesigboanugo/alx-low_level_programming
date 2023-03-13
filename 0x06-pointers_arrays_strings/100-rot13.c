#include "main.h"

/**
* rot13 - encodes a string using rot13
* @s: a string
*
* Return: a pointer to a string
*/

char *rot13(char *s)
{
	int i, j, n;
	char str[] = "anbocpdqerfsgthuivjwkxlymz";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (str[j] == s[i] || str[j] == s[i] + 32)
			{
				n = -26 * (j % 2);
				s[i] = s[i] + 13 + n;
				break;
			}
			j++;
		}
	       i++;
	}

	return (s);
}
