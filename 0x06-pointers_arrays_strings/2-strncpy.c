#include "main.h"

/**
* _strncpy - copies a string to another using at most n bytes.
* @src: source string
* @dest: destination string
* @n: an integer
*
* Return: pointer to a string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{	
		if (src[i] == '\0')
			break;
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
