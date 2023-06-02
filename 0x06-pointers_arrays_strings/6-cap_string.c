#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	/* Iterate over each character in the string */
	while (str[i] != '\0')
	{
		/* Capitalize the charcater if it should be capitalized */
		if (capitalize_next && islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}

		/* Check if the curent charcter is a separator */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}

		i++;
	}

	return (str);
}
