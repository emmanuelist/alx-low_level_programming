#include "main.h"

/**
 * _strlen_recursion - Return the length of a string using recursion.
 * @s: The string whose length is to be calculated.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	/* Base case: if the string is empty or thr end of the string is reached */
	if (*s == '\0')
		return (0);

	/* Recursive case: increment the length and move to the next chacter */
	return (1 + _strlen_recursion(s + 1));
}
