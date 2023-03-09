#include "main.h"

/**
* _strncat - concatenates two strings using at most n bytes.
* @src: source string
* @dest: destination string
* @n: an integer
*
* Return: pointer to a string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (src[j] == '\0')
	{
		dest[i] = '\0';
	}

	return (dest);
}
