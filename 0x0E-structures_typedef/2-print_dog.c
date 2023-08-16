#include "dog.h"

/**
 * print_dog - Print the details of a dog
 * @d: Pointer to the struct dog to be printed
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		/* Print the dog's name */
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");

		/* Print the dog's age */
		printf("Age: %.1f\n", d->age);

		/* Print the dog's owner */
		printf("Owne: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
