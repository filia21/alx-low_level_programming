#include "main.h"

/**
 * _puts_recursion - prints input strings
 * @s: pointer parameter
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');

}
