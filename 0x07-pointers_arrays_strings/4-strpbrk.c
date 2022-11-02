#include "main.h"

/**
 * *_strpbrk - his function searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to set of bytes to find.
 *
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

