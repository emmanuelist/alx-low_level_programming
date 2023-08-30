#include <stdio.h>

/**
 * pre_main_function - function executed before main
 * Description: This function is executed before the main function.
 * Return: None
 */
void __attribute__((constructor)) pre_main_function()
{
    printf("You're fatigued! However, you must permit");
    printf(",\nI carry my dwelling on my dorsal side!\n");
}

