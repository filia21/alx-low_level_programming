#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatinate stringd
 * @s1: firist parameter
 * @s2: second parameter
 * @n: third parameter
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	while (si[j])
		j++;
	if (s1 == NULL)
		s1 = "";
	while (s2[k])
		k++;

	if (n >= k)
		n = k;

	ptr = malloc(j + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (j + n); i++)
	{
		if (i < j)
			ptr[i] = *s1, s1++;
		else
			ptr[i] = *s2, s2++;
	}
	ptr[i] = '\0';

	return (ptr);
}
