#include "main.h"

/**
 * _strncpy - Copies a string from src to dest, up to n characters.
 * @dest: The destination string.
 * @src: The source string to copy.
 * @n: The maximum number of character to copy.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy at most n characters from source to destination */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Pad remaining character in destination with null bytes if necessary */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

