#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *
 *
 */
void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)

		return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");

	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	frre (d)
print_dog(struct dog *d	return;
}
