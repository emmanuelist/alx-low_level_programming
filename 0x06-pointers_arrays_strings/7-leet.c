#include "main.h"

/**
 * leet -Encode a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	/* Iterate over each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Iterate over each letter in the encoding mapping */
		for (j = 0; letters[j] != '\0'; j++)
		{
			/**
			 * If the current character matches a letter in the mapping,
			 * replace it with the corresponding number
			 */
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				break; /* Found a match, no need to continue searching */
			}
		}
	}

	return (str);
}

