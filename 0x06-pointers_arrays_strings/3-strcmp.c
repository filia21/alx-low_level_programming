#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: intiger
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
