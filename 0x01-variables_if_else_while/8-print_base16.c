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
	char ch;

	for (ch = '0'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
