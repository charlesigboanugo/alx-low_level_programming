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
	int size = 0, i, j;
	char *ptr, *ret;

	if (ac == 0 || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*(av[i] + j))
		{
			size++;
			j++;
		}
	}

	ptr = malloc(size + 1 + ac);
	if (!ret)
		return (NULL);

	ret = ptr;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*(av[i] + j))
		{
			*ptr++ = *(av[i] + j);
			j++;
		}
		*ptr++ = '\n';
	}

	return (ret);
}
