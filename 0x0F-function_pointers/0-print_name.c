#include "function_pointers.h"

/**
 * print_name - Print a give name.
 * @name: The name to be printed.
 * @f: A pointer to the function used for printing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
