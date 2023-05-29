#include "main.h"

/**
 * print_line -Draws a stright linein the terminal.
 * @n: Number of times the charcater '-' should be printed.
 */

void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar('-');
		n--;
	}

	_putchar('\n');
}
