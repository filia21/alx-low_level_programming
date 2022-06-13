#include "main.h"

/**
 * _puts - a function that prints string
 * @str: string to be printed
 * Return: Always 0
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
