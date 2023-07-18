#include <stdio.h>
#include "dog.h"
/**
 * init_dog - use in the min function
 * @d: first input
 * @name: socund input
 * @age: thired input
 * @owner: fourth input
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
