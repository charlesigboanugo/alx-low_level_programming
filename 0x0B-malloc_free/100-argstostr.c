#include <stdlib.h>

/**
 * argstostr - converts array of strings to one string with newline separators
 *
 * @ac: number of strings
 * @av: array of strings
 *
 * Return: char * to concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *ptr, *ret;
	unsigned int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);

	size = 1;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++)
			size++;
	}

	ptr  = malloc(sizeof(*ptr) * (size + 1));
	if (!ptr)
		return(NULL);

	ret = ptr;
	for (i = 0, k = 0; k < size - 1; i++)
	{
		j = 0;
		while (*(av[i] + j) != '\0')
		{
			*ptr++ = *(av[i] + j);
			j++;
			k++;
		}
		*ptr++ = '\n';
	}

	*ptr = '\0';

	return (ret);
}
