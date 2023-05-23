#include "main.h"

/**
 * print_alphabet - Prints the alphabet, in lowercase
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
