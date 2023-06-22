#include "main.h"
#include <stddef.h>

/**
 * _memcpy - fills memory with another buffer.
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to the destination memory area (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (dest == NULL || src == NULL)
		return (NULL);

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

