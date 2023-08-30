#include <stdio.h>

/**
 * pre_main_function - function executed before main
 * Description: This function is executed before the main function.
 * Return: None
 */
void __attribute__((constructor)) pre_main_function()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

