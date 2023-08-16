#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 */

/* Function to initialize a dog */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		/* set the attributes of the dog */
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
