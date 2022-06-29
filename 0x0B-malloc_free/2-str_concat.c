#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatinate two strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *p;

	if (s1 == NULL)
		s1 = "";
	for (i = 0; *(s1 + i) != '\0'; i++)
	{}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{}
	p = malloc(sizeof(char) * (i + j + 1));

	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		*(p + k) = *(s1 + k);
	for (l = 0; l < j; l++)
		*(p + (i + l)) = *(s2 +1);
	p[i + j] = '\0';
	return (p);
}
