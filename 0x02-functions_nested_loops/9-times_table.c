#include "main.h"
#include <stdio.h>
/**
 * times_table - print 9 times table, starting with 0.
 *
 * Return: 0 on success
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
		for (j = 1; j <= 9; j++)
			printf("%d * %d = %d\n", i, j, i * j);
}
