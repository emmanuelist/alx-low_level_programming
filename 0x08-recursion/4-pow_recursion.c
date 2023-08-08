#include "main.h"

/**
 * _pow_recursion - Calculate the valuee of x raised to the
 * power of y using recursion.
 * @x: The base value.
 * @y: The exponent value.
 * Return: The result of x^y. If y < 0, return -1 for error.
 */

int _pow_recursion(int x, int y)
{
	/* Base case: If y is 0, return 1 */
	if (y == 0)
		return (1);

	/* If y is negative, return -1 */
	if (y < 0)
		return (-1);

	/* Recursive case: multiply x by the result of -pow_recursion(x, y-1) */
	return (x * _pow_recursion(x, y - 1));
}
