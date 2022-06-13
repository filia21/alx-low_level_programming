#include "main.h"

/**
 * rev_string - reverse a string
 * @s: character parameter
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char tmp;

	while (s[len] != '\0')
		len++;

	while (i <= len--)
	{
		tmp = s[i];
		s[i++] = s[len];
		s[len] = tmp;
	}

}
