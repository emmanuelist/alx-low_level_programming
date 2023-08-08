/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int len = 0;
	int i;

	/* Calculate the length of the string */
	while (s[len] != '\0')
		len++;

	/* Check if the string is empty */
	if (len == 0)
		return (1);

	/* Iterate through the first half of the string */
	for (i = 0;  i < len / 2; i++)
	{
		/* Compare charcters at corresponding positions from both ends */
		if (s[i] != s[len - i - 1])
			return (0);
	}

	return (1);
}

