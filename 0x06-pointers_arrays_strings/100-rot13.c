#include "main.h"
/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to encode.
 *
 * Return: A ponter to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
			*ptr += 13;
		else if ((*ptr >= 'm' && *ptr <=  'z') || (*ptr >= 'N' && *ptr <= 'Z'))
			*ptr -= 13;

		ptr++;
	}

	return (str);
}

