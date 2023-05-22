#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (i != j)
			{
				putchar(i = '0');
				putchar(j + '0');
			}
		}
	}

	putchar('\n');

	return (0);
}
