#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 *
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		for (; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
}
