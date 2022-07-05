#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function to create new dog
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
 * Return: Pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t p;

	p = malloc(sizeof(dog_t));
	
	if (p == NULL)
		return (NULL);
	if (name == NULL)
	{
		free (p);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free (p);
		free (name);
		return (NULL);
	}

	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
