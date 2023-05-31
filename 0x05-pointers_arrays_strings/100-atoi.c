#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
	int sign = 1, result = 0, i = 0;

	/* Skip leading whitspace */
	while (s[i] == ' ')
	{
		i++;
	}

	/* Check for sign */
	if (s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}

	/* Convert string to integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for integer overflow */
		if (result > (INT_MAX / 10) ||
				(result == (INT_MAX / 10) && (s[i] - '0') > (INT_MAX % 10)))
		{
			/* Handle integer overflow */
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
