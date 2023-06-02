#include "main.h"

/**
 * _strncat - Concatenates two strings unsing at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: The maximum number of bytes to concatenate from src.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* move the pointer to the end of the destination string */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/**
	 * Copy the source string to the end of the destination string
	 * using at most n bytes
	 */
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	/* Add a terminatinating null byte to  the resulting string */
	*ptr = '\0';

	return (dest);
}

