#include "main.h"

/**
 * print_line - print n number of lines
 * @n: the number of character to be printed
 * Return: Nothing.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
