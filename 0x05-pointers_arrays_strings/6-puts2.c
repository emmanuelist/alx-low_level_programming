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
	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
