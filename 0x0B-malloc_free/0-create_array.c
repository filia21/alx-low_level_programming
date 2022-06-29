#include "main.h"
#include <stdio.h>
/**
 * create_array -function to create array
 * @size: first parameter
 * @c: second parameter
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(c) * size);

	if (size == 0 || p == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
		*(p + i) = c;

	return (p);
}
