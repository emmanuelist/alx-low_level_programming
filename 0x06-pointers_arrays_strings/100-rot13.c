#include "main.h"

/**
 * *rot13 - Encodes a string using rot103
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		while (s[i] >= 'a' && s[i] <= 'z' ||
			(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm' ||
				(s[i] >= 'A' && s[i] <= 'M'))
				s[i] += 13;
			else
				s[i] -= 13;
			i++;
		}
		i++;
	}
	return (s);
}

