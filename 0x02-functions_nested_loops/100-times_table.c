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
	{

		return; /* Exit the function if n is out of range */
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (j != 0)
			{
				printf(", "); /* Separate numbers with  comm nd three spaces */
			}

			printf("%-3d", result); /*Print the number left-aligned with a width of 3 chracters*/
		}
		printf("\n");
	}
}
