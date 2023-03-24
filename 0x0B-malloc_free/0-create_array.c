#include <stdlib.h>

/**
 * create_array - creates an array of size size
 *
 * @size: size of array
 * @c: char to fill array with
 *
 * Return: pointer to first element
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
