#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns length of string
 * @s: initial pointer
 * Return: an intiger value
 */
int _strlen(char *s)
{
	int len;

	while(s[len] != '\0')
		len++;

	return (len);
}
