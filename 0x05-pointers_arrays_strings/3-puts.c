#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointers to te string to be printed.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}

	write(1, "\n", 1);
}

