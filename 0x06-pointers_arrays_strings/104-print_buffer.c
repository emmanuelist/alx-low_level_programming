#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer according
 * to the given specifications.
 * @b: The buffer to be printed.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	/* Iterate over the buffer, printing 10 bytes per line */
	for (i = 0; i < size; i += 10)
	{
		/* Print the position of the first byte in hexadecimal format */
		printf("%08x: ", i);
		/* Print the hexadecimal content of the buffer, 2 bytes at a time */
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf(" ");

			if (j % 2 == 1)
				printf(" ");
		}

		/* Print the corresponding printable characters or "." */
		for (j = 0; j < 10; j++)
		{
			if (i + j >= size)
				break;

			if (isprint(b[i + j]))
				printf("%c", b[i + j]);
			else
				printf(".");
		}

		printf("\n");
	}
}

