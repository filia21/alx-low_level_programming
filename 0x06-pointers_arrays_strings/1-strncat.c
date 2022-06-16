#include "main.h"

/**
 * _strncat - string concatinating function
 * @dest: first string parameter
 * @src: second string parameter
 * @n: third intiger parameter
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *tmp = dest, *start = src;

	while (*src)
	{
		len++;
		src++;
	}
	while (*dest)
		dest++;
	if (n > len)
		n = len;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';

	return (tmp);
}
