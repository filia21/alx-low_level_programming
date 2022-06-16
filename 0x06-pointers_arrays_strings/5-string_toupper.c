#include "main.h"

/**
 * string_toupper - change all letter to uppercase
 * @s: first parameter
 * Return: intinger
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (start);
}
