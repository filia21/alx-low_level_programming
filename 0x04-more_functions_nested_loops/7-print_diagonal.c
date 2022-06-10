#include "main.h"
/**
 * print_diagonal - print the character '\' 
 * @n: the number of times '\' will be printed
 * Retun=rn: Nothing
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');

	}

	else
		_putchar('\n');

}
