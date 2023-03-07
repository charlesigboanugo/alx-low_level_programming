#include <stdio.h>

/**
* _atoi - convert a string to an integer.
* @s: a string
*
* Return: an integer
*/

int _atoi(char *s)
{
	int i, sign, result;

	sign = 1;
	result = 0;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');

			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
		i++;

	}

	return (sign * result);
}
