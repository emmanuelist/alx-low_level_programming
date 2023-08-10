#include "main.h"

/**
 * wildcmp - compares two strings.
 * @s1: The first string.
 * @s2: The second string. It can contain '*' as a special character.
 * Return: 1 if the strings are a match, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{

	/**
	 * If s2 starts with '*' and has more characters,
	 * but s1 is empty, then they can't match.
	*/
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	/* If both strings are empty, they match. */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/**
	 * If the current characters of s1 and s2 are the same,
	 * check the next characters.
	 */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/**
	 * If s2 has a '*', it can match either an empty sequence or
	 * the rest of s1, so we try both possibilities.
	 */
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	/**
	 * If none of the above conditions are met, the
	 * strings don't match.
	 */
	return (0);
}

