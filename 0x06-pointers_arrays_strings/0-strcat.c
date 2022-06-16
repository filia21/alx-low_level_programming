#include "main.h"

/**
 * _strcat - function to concatinate strings
 * @dest: string to be concatinated
 * @src: first char parameter
 * Return: a pointer
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (tmp);

}
