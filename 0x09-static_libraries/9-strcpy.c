#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies a string from src to dest, including the null terminator.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination buffer (dest).
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy each character from src to dest */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Add the null terminator to the end of dest */
	dest[i] = '\0';

	return (dest);
}

