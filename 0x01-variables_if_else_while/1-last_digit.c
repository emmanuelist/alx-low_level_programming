#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program will assign a random number to a variable n each
 * time it is executed
 *
 * Return: 0 on success
 */

int main(void)
{
	int n, last_digit;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Extract the last digit of n */
	last_digit = n % 10;


	/* Print the desired output */
	printf("Last digit of %d is %d ", n, last_digit);

	if (last_digit > 5)
		printf("and is grater than 5\n");
	else if (last_digit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}
