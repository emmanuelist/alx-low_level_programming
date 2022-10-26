#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destination string to be concatenated upon
 * Return: pointer to the result string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return (dest);
}

