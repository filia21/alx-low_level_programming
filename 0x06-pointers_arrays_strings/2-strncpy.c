#include "main.h"

/**
 * _strncpy - function that copies string
 * @dest: first pointer 
 * @src: second pointer
 * @n: third parameter
 * Return: A pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;
	char *tmp = dest;
	char *start = src;

	while (*src)
	{
		len++;
		src++;
	}

	len++;

	if (n > len)
		n = len;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (tmp);
	
}
