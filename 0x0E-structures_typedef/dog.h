#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a dog's basic  info
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: who is the owner of the dog
 *
 * Description: No descripion for this struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Typedef for struct for dog */
typedef struct dog dog_t;

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *scr);
int _strlen(char *s);


#endif
