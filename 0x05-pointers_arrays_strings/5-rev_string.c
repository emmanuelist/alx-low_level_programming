#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i;
	char ch;

	for (i = 0; i < _strle(s) / 2; ++i)
	{
		ch = s[i];
		s[i] = s[_strlen(s) - i - 1];
		s[_strlen(s) - i - 1] = ch;
	}
}
