#include <stdlib.h>

/**
 * _strdup - duplicates a string into newly allocated array
 *
 * @str: string to duplicate
 *
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (i = 2; str[i] != '\0'; i++)
		
	ptr = malloc(i);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];

	ptr[i] = '\0';

	return (ptr);
}
