#include "main.h"

/**
 * rev_string - Reverse a string in-place.
 * @s: Pointer to the string to be reversed
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char temp;

	/* First the end of the string */
	while (*end != '\0')
	{
		end++;
	}
	end--; /* Adjust end pointer to the last charcter beorer null terminator */

	/* Swap character from both end untiil they meet in the middle */
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
