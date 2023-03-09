#include <limits.h>

/**
* _atoi - convert a string to an integer.
* @s: a string
*
* Return: an integer
*/

int _atoi(char *s)
{
	int i, sign, result, unit;

	sign = 1;
	result = 0;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			unit = s[i] - '0';
			if (result > INT_MAX / 10 || result > (INT_MAX - unit) / 10)
				return (INT_MIN);

			result = result * 10 + (unit);

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;

	}

	return (sign * result);
}
