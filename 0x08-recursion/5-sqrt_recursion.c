/**
 * checker - Recursive helper function to find natural squre root.
 * @n: The number being squared and compared against the base.
 * @base: The base number to check against.
 * Return: The natural square root of base if found, otherwise -1.
 */

int checker(int n, int base);

/**
 * _sqrt_recursion - Calculates the natural square root
 * of a number using recursion.
 * @n: The number for which square root is to be calculated.
 * Return: The natural square root of n. If n does not have a
 * natural square root, returns -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1); /* Error case: negative number */
	}

	return (checker(1, n)); /* Call the checker function with initial values */
}

/**
 * checker - Calculate the natural square root of a number using recursion.
 * @n: The number being squared and compared against the base.
 * @base: The base number to check against.
 * Return: The natural square root of base if found, otherwise -1.
 */


int checker(int n, int base)
{
	if (n * n == base)
	{
		return (n); /* Found the natural square root */
	}
	else if (n * n > base)
	{
		return (-1); /* No natural square root  */
	}

	return (checker(n + 1, base)); /* Recursively call with increment n  */
}
