#include <stdio.h>
#include "dog.h"
/**
 * init_dog - use in the min function
 * @d: first input
 * @name: socund input
 * @age: thired input
 * @owner: fourth input
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	init_dog = malloc(sizeof(init_dog));
	if (init_dog != NUll)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
