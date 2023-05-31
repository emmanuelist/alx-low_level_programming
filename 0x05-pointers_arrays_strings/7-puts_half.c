#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string followed by a new line.
 *
 * @str: Pointer to the string.
 */
void puts_half(char *str)
{
	int length = 0, i, start = length / 2;

	/* Find the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Determine the starting index based on the string length */
	if (length % 2 != 0)
	{
		start += 1;
	}

	/* Print the second half of the string */
	for (i = start; i < length; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}

