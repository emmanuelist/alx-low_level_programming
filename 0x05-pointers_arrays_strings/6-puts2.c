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
	while (str[i] != '\0' && str[i + 1] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}

	printf("\n");
}
