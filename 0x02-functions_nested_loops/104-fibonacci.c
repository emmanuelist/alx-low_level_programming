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
	if (n < 0 || n > 15)
		return (); /* Exit the function if n is out of range */

	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;

			printf("%-4d", result); /* Adjust the width foor neat aligment */
		}
		printf("\n");
	}
}
