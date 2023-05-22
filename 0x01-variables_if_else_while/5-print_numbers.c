#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 *
 * Return: 0 on success
 */

int main(void)
{
	int num;

	/* Print single-digit numbers from 0 to 10 */
	for (num = 0; num < 10; num++)
		putchar('0' + num);

	putchar('\n');

	return (0);
}
