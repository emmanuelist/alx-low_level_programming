#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 Always.
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		/* If number is divisible by both 3 and 5 */
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0) /* If divisible by 3 */
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0) /* If divisible by 5 */
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}

	printf("\n");

	return (0);
}
