#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: pointer to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Dname: %s\nDage: %f\nOwner name: %s\n, d->name, d->age, d->owner");
}
