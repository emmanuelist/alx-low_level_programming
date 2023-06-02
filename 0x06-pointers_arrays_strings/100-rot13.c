#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to encode.
 *
 * Return: A ponter to the modified string.
 */
char *rot13(char *str)
{
	int i, j;
	char letters[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	/* Iterate over each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Check if the current character */
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			/* Find the corresponding letter in thne ROT13 mapping */
			for (j = 0; letters[j] != '\0'; j++)
			{
				if (str[i] == letters[j])
					str[i] = rot13[j];
				break; /* Found a match, no need to continue searching */
			}
		}
	}

	return (str);
}

