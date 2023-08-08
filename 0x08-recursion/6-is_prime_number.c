/**
 * is_prime_recursive - Checks if a number is a prime number recursively.
 * @n: The number to be checked.
 * @divisor: The divisor to be checked.
 * Return: 1 if the number is prime, 0 if it's not.
 */

int is_prime_recursive(int n, int divisor)
{
	/* 1 and negative numbers are not prime */
	if (n <= 1)
		return (0);

	if (divisor == 1)
	{
		return (1); /* Base case: divisor reached 1, n is prime */
	}

	if (n % divisor == 0)
	{
		return (0); /* n is divisible by divisor, not prime */
	}

	/* Recurse with the next divisor */
	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to be checked.
 * Return: 1 if the number is prime, 0 if it's not.
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}

