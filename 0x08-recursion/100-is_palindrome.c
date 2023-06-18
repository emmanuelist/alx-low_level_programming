#include "main.h"
#include <string.h>

/**
 * s_len - calculates the length of  string.
 * @s: original string
 *
 * Return: length of string
 */

int is_palindrome(char *s)
{
	/* calculate the length of the string */
	int len = strlen(s);

	/* Initialize two pointers, one at the beginning and and one at the end */
	int start = 0;
	int end = len - 1;


	/* Check for empty string (considered a palindrome */
	if (len == 0)
	{
		return (1);
	}

	
	/* Iterate until the two pointers meet or cross each other */
	while (start < end)
	{
		/* Compare the characters at the current positions */
		if (s[start] != s[end])
		{
			return (0); /* Not a Palindrome */
		}

		/* Move the pointers closer to each other */
		start++;
		end--;
	}

		return (1); /* Palindrome */
}
