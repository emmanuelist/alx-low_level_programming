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
	long i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
				n = n / i;
		}
	}

	return (i - 1);
}

int main(void)
{
	long num = 612852475143;
	long largest_factor;

	largest_factor = largest_prime_factor(num);

	printf("%ld\n", largest_factor);

	return (0);
}

