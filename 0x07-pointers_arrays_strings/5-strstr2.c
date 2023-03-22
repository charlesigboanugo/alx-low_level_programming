#include "main.h"
#define NULL 0

/**
 * _strstr - locates a substring
 * @haystack: string to search through
 * @needle: string to match
 * Return: pointer to initial segment of haystack
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int j;
	char *h = haystack;
	char *n = needle;

	if (*n == '\0')
		return (h);

	while (*h != '\0')
	{
		if (*h == *n)
		{
			j = 1;
			while (*(n + j) != '\0')
			{
				if (*(h + j) != *(n + j))
					break;
				j++;
			}
			if (*(n + j) == '\0')
				return (h);
		}
		h++;
	}

	return (NULL);
}
