#include <stdlib.h>

/**
 * strtow - converts a string into its separate words
 *
 * @str: string to convert into words
 *
 * Return: 2d array pointer
 */
char **strtow(char *str)
{
	char **arr, *ptr = str, *sptr;
	unsigned int i, j, arrsize = 0, wsize = 0;

	if (*ptr == '\0' || !ptr)
		return (NULL);

	for (; *ptr; ptr++)
	{
		if ((*(ptr + 1) == 32 || *(ptr + 1) == '\0') && *ptr != 32)
			arrsize++;
	}

	arr = malloc(sizeof(*arr) * (arrsize + 1));
	if (!arr)
		return (NULL);

	ptr = str;
	for (i = 0; i < arrsize; ptr++)
	{
		if ((*(ptr + 1) == 32 || *(ptr + 1) == '\0') && *ptr != 32)
		{
			sptr = ptr;
			wsize = 0;
			for (; *sptr != 32 && sptr >= str; sptr--)
				wsize++;
			arr[i] = malloc(sizeof(*arr[i]) * (wsize + 1));
			if (!arr[i])
			{
				while (--i >= 0)
					free(arr[i]);
				free(arr);
				return (NULL);
			}
			for (j = 0; j < wsize; j++)
				arr[i][j] = *++sptr;
			i++;
		}
	}
	return (arr);
}
