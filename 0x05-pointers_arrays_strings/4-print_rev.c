#include "main.h"

/**
 * print_rev - prints the reverse of string
 * @s: initial char parameter
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');

}
