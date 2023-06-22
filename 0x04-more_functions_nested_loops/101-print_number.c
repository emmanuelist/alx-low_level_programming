#include "main.h"

/**
 * print_number - Print an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		/* Handle the case for y=the largest negative integer */
		if (n == -2147483648)
		{
			_putchar('2');
			n = 147483648;
		}
		else
		{
			n = -n;
		}
	}

	if (n / 10 != 0)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
