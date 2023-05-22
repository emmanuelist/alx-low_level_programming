#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on (success)
 */

int main(void)
{
	char lowercase;
	char uppercase;

	/* Print the lowercase alphabet (from 'a' to 'z') */
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	/* Print the uppercase alphbet (from 'A' to 'Z') */
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	/* Print a newline character */
	putchar('\n');

	return (0);
}
