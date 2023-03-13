#include "main.h"

/**
* rot13 - encodes a string using rot13
* @s: a string
*
* Return: a pointer to a string
*/

char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'm')
			s[i] += 13;
		else if (s[i] >= 'n' && s[i] <= 'z')
			s[i] -= 13;
		else if (s[i] >= 'A' && s[i] <= 'N')
			s[i] += 13;
		else if (s[i] >= 'N' && s[i] <= 'Z')
			s[i] -= 13;
		else
			s[i] = s[i];
	       i++;	
	}

	return (s);
}
