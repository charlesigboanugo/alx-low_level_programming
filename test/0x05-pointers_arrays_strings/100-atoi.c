/**
* _atoi - convert a string to an integer.
* @s: a string
*
* Return: an integer
*/

int _atoi(char *s)
{
	int i, sign, unit;
	unsigned int result;

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
			result = result * 10 + (unit);

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;

	}
	if (sign < 0)
		return (-result);
	return (result);
}
