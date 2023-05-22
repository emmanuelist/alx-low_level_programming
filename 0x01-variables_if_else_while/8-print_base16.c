#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 on success
 */

int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
		putchar('0' + number);

	for (letter = 0; letter < 6; letter++)
		putchar('a' + letter);

	putchar('\n');

	return (0);
}
