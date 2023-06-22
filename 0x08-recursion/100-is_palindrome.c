#include "main.h"
#include <string.h>
#include <stdbool.h>

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
bool is_palindrome_helper(const char *s, int start, int end);

int is_palindrome(char *s)
{
	/* Calculate the length of the string */
	int len = strlen(s);

	/* Check for empty string (considered a palindrome) */
	if (len == 0)
		return (1);

	/* Start the recursive helper function */
	return (is_palindrome_helper(s, 0, len - 1) ? 1 : 0);
}

/**
 * is_palindrome_helper - Recursive helper function
 * to check if a string is a palindrome
 * @s: The string to check
 * @start: The starting index of the current comparison
 * @end: The ending index of the current comparison
 *
 * Return: true if the string is a palindrome, false otherwise
 */
bool is_palindrome_helper(const char *s, int start, int end)
{
	/* Base case: when start and end pointers meet or cross each other */
	if (start >= end)
		return (true);

	/**
	* Recursive case: check if the characters
	* at start and end positions are equal
	*/
	if (s[start] != s[end])
		return (false);

	/* Recursively call the function with updated pointers */
	return (is_palindrome_helper(s, start + 1, end - 1));
}

