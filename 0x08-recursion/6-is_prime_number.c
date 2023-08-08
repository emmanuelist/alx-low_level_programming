/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 * Return: 1 if the number is prime, 0 if it's not.
 */

int is_prime_number(int n)
{
	int i;

	/* 1 and negative numbers are not prime */
	if (n <= 1)
		return (0);

	/* Check if n is divisible by any number less thn itself */
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	/* n is prime if it is not divisible by any number less than itself */
	return (1);
}
