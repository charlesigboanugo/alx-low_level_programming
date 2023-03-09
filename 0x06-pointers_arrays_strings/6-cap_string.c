#include "main.h"

/**
* cap_string - capitalize a string
* @s: a string
*
* Return: pointer to a string
*/

char *cap_string(char *s)
{
	int i, j, next;
	char str[] = ",;.!?\"(){} \t\n";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
		i++;

	i = 0;
	while (s[i] != '\0')
	{
		j  = 0;
		next = i + 1;
		while (str[j] != '\0')
		{
			if (s[i] == str[j] && s[next] >= 'a' && s[next] <= 'z')
			{
				s[next] = s[next] - 32;
			}
			j++;
		}
		i++;

	}
	return (s);
}
