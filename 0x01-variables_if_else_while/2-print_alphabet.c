#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Retune: 0 on (success)
 */
int main(void)
{
	char ch = 'a';

	for (; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
