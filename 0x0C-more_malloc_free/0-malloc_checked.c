#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - returns pointer
 * @b: first parametr
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if  (ptr == NULL)
		exit(98);
	return (ptr);
}
