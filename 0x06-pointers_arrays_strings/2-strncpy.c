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
	int s = 0;

	while (src[s] != 0 && s < n)
	{
		dest[s] = src[s];
		s++
	}

	while (s < n)
	{
		dest[s] = 0;
		s++;
	}

	return (dest);

}
