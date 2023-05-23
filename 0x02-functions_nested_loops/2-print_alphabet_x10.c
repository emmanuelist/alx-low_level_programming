#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 *
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int count = 0;

	while (count < 10)
	{
		for (; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		count++;
		ch = 'a';
	}

	_putchar('\n');
}
