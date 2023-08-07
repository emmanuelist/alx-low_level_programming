#include "main.h"

/**
 * factorial - Calculate the factorial of a number
 * @n: The number of which factorial is to be clculated.
 * Return: The factorial of the number. If n < 0, returns -1 for error.
 */

int factorial(int n)
{
	/* Check if n is negative */
	if (n < 0)
	{
		return (-1);
	}

	/* Base case: factorial of 0 is 1 */
	if (n == 0)
		return (1);

	/* Recursive case: multiply n by factorial of (n-1) */
	return (n * factorial(n - 1));
}
