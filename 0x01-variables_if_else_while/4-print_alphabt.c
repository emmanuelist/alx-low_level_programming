#include <stdio.h>
/**
 * main -Entry point
 * Description: Program that prints the alphabet in lowercase,
 * followed by a new line
 *
 * Return: 0 on ssucess
 */
int main(void)
{
	char letter;
	/* Print the alphabet in lowercase excluding 'q' and 'e' */
	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'q' && letter != 'e')
			putchar(letter);

	putchar('\n');

	return (0);
}
