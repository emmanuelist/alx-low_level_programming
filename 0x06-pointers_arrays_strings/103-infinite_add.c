#include "main.h"
#include <string.h>

/**
 * infinite_add - Adds two numberss represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result (r) or 0 if the result cannot be stored in r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1), len2 = strlen(n2), i, j;
	int carry = 0;
	int digit1;
	int digit2;
	int sum;

	/* Check if the result can be stored in r. */
	if (size_r < len1 + len2 + 1)
	{
		return (0);
	}

	/* Initialize the result buffer. */
	for (i = 0; i < size_r; i++)
	{
		r[i] = '\0';
	}

	/* Add the two numbers. */
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
	{
		digit1 = (i >= 0) ? n1[i] - '0' : 0;
		digit2 = (j >= 0) ? n2[j] - '0' : 0;
		sum  = digit1 + digit2 + carry;
		r[i + j + 1] = (sum % 10) + '0';
		carry = sum / 10;
	}

	/* If there is any carry, append it to the result buffer. */
	if (carry > 0)
	{
		r[size_r - 1] = carry  + '0';
	}

	return (r);
}
