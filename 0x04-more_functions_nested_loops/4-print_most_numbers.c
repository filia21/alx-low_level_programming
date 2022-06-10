#include "main.h"

/**
 * print_most_numbers - prints number form 0 to 9 except 2 & 4
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);

	}
	_putchar('\n');
}
