#include "main.h"

/**
* puts_half - prints second half of a string
* @str: a string
*
* Return: void
*/

void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}

	j = (i + 1) / 2;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
