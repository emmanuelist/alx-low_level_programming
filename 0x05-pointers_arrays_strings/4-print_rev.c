#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print a string in reverse followed bt a new line.
 * @s: Pointer to the string to be printed in reverse.
 */

void print_rev(char *s)
{
	int length = 0, i;

	/* Find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Print the string in rever order */
	for (i = length - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

	printf("\n");
}
