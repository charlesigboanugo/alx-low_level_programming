#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
