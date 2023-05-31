#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string followed by a new line.
 * @str: Pointer to the string.
 */
void puts2(char *str)
{
	int i = 0;

	/* Iterate through the string and prints every other charcter */
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}

	putchar('\n');
}
