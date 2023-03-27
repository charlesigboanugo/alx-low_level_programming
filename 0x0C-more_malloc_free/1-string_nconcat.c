#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: a string
 * @s2: another string
 * @n: an integer
 * Return: pointer to a string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *wtr;
	unsigned int i, size = 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	wtr = s1;
	for (; *wtr != 0; wtr++)
		size++;

	wtr = s2;
	for (i = 1; *wtr != 0, i <= n; i++, wtr++)
		size++;

	ptr = malloc(sizeof(*ptr) * size);

	if (!ptr)
		return (NULL);

	wtr = ptr;
	for (; *s1 != 0; s1++, wtr++, size--)
		*wtr = *s1;

	for (; *s2 != 0 && size > 1; s2++, wtr++, size--)
		*wtr = *s2;

	return (ptr);
}
