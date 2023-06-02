#include "main.h"

/**
 * reverse_array - Reverse the content of any array of integers.
 * @a: The array of integers.
 * @n: The number of element in the array.
 *
 * Description: Function that reverses the content of an array of integers.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - i - 1] = temp;
	}
}

