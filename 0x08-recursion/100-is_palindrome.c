/**
 * palindrome_recursive - Recursive helper function to check if a string is a palindrome.
 * @s: The string to be checked.
 * @start: The starting index of the current comparison.
 * @end: The ending index of the cureent comparison.
 * Return: 1 if the string is a palindrome, 0 otherwiw.
 */

int palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1); /* Base case: if indices meet or cross, string is palindrome */
	}

	if (s[start] != s[end])
	{
		return (0); /* Chracters don't match, nt a palindrome */
	}

	/* Recurse with incremented start and decremented end */
	return (palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome -Checks if a string is a palindrome.
 * @s: The string to be checked.
 */

int is_palindrome(char *s) {
	int len = 0;

	/* Calculate the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Check if the string is empty */
	if (len == 0)
	{
		return (1);
	}

	/* Call the recursive helper function with start and end indices */
	return (palindrome_recursive(s, 0, len -1));
}
