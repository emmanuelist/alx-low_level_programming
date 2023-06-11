#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: The number representing the size of the times table.
 *
 * Return: 0 on success
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n < 0 || n > 15)
		return; /* Exit the function if n is out of range */

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar('0'); /* Print the initial '0' in each row */

			if (j != 0)
			{
				/* Print the comma and space before each number */
				_putchar(',');
				_putchar(' ');

				result = i * j;

				/* Handle the formatting based on the value of the product */
				if (result < 10)
				{
					/* Print two space and the single-digit product */
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product < 100)
				{
					/* Print a space, tens digit, and ones digit of the two digit-digit product */
					_putchar(' ');
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
				else
				{
					/* Print the hundred, tens, and ones digit of the three-digit product */
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
		}

		/* Move to the nest line after each row */
		_putchar('\n');
	}
}
