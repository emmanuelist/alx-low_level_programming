#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array of strings containing the arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	/* Check if we have exactly 1 argument */
	if (argc != 2)
	{
		printf("Oops! You need to provide an amount in cents.\n");
		return (1);
	}

	/* Convert the user's input into an integer */
	int cents = atoi(argv[1]);

	/* Check if the user tried to be tricky with a negative amount */
	if (cents < 0)
	{
		printf("Hmm, can't make change for a negative amount. So, it's 0 cents.\n");
		return (0);
	}

	/* These are the coins we have */
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coins) / sizeof(coins[0]);

	int count = 0; /* Initialize the counter for coins used */

	/* Let's figure out the coins needed */
	int i;

	for (i = 0; i < numCoins; i++)
	{
		count += cents / coins[i]; /* Count how many of this coin we can use */
		cents %= coins[i]; /* Get the remaining amount after using this coin */
	}

	/* Print the result */
	printf("You need the minimum of %d coins.\n", count);

	return (0);
}
