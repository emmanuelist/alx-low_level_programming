#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locate a substring
 * @haystack: Pointer to the string to be searched
 * @needle: Pointer to the substringn to be located
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (haystack == NULL || needle == NULL)
		return (NULL);

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				break;
			}

			if (needle[j] == '\0')
				return (&haystack[i]);
		}
	}

	return (NULL);
}

