#include "main.h"

/**
 * rev_string - reverse a string
 * @s: character parameter
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, len;
	char a, z;

	len = _strlen(s) - 1;

	i = 0;
	while (i < len)
	{
		a = s[i];
		z = s[len];
		s[i++] = z;

		s[len--] = a;
	}

}
