#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of intgers
 * followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Numbers of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	/* Print the elements of array up to the specified number */
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		/* Print comma and space if it;s not the last element */
		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
