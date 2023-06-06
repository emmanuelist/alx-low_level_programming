#include "main.h"
#include <string.h>

/**
 * infinite_add - Adds two numberss represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result (r) or 0 if the result cannot be stored in r.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1), len2 = strlen(n2);
	int carry = 0;
	int sum;
	int i = 0;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	while (len1 > 0 || len2 > 0)
	{
		sum = carry;
		if (len1 > 0)
			sum += n1[--len1] - '0';
		if (len2 > 0)
			sum += n2[--len2] - '0';

		r[i++] = sum % 10 + '0';
		carry = sum / 10;
	}

	if (carry)
		r[i++] = carry + '0';

	r[i] = '0';

	reverse_string(r);

	return (r);
}
