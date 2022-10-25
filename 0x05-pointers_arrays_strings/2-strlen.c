#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; s++)
		++i;

	return (i);
}

