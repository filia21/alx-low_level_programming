#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize struct
 * @d: firist parameter
 * @name: second parameter
 * @age: second parameter
 * @owner: third parameter
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
