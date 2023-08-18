#include "function_pointers.h"

/**
 * int_index - Search for an integer in an array.
 * @array: The array to search.
 * @size: The size of the array.
 * @cmp: A pointer to the function used for comparison.
 *
 * Return: Index of the first element that meets the condition, -1 if not.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
