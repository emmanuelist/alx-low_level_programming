#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @n: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of the number
 */
long largest_prime_factor(long n)
{
	long i, largestFactor;

	/* Check for factors of 2 */
	while (n % 2 == 0)
	{
		largestFactor = 2;
		n /= 2;
	}

	/* Check for factors of odd numbers */
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largestFactor = i;
			n /= i;
		}
	}

	/* If the number itself is a prime number */
	if (n > 2)
		largestFactor = n;
	return (largestFactor);
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	long largestFactor = largest_prime_factor(n);

	printf("The largesr prime factor of %ld is %ld\n", n, largestFactor);

	return (0);
}
