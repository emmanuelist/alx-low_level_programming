#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of characters and
 * fills it with a specific character.
 * @size: The size of the array to create.
 * @c: The character to fill the array with.
 *
 * Return: A pointer to the created array (Success), NULL (Error).
 */
char *create_array(unsigned int size, char c)
{
	/**
	 * Check if the requested size is 0, which is not allowed.
	 */
	if (size == 0)
		return (NULL);
	/**
	 * Allocate memory for the array.
	 */
	char *array = (char *)malloc(sizeof(char) * size);

	/**
	 * Check if memory allocation was successful.
	 */

	if (array == NULL)
		return (NULL);
	/**
	 * Fill the array with the specified character.
	 */
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	/**
	 * Add a null-terminating character to make it a valid string.
	 */
	array[size] = '\0';

	return (array);
}
