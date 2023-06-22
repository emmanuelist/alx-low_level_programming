#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @n: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of the number
 */
long int largest_prime_factor(long n)
{
	long i, largestFactor = -1;

	/* Divide the number by 2 until it is no longer divisible by 2 */
	while (n % 2 == 0)
	{
		largestFactor = 2;
		n /= 2;
	}

	/* Check for factors starting from 3 (odd) */
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largestFactor = i;
			n /= i;
		}
	}

	/* If the remaining number is greater than 2, it is a prime factor */
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
	long int n = 612852475143;
	long int largestFactor = largest_prime_factor(n);

	printf("%ld\n", largestFactor);

	return (0);
}
