#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print arrays
 * @a: intiger pointer parameter
 * @n: second intiger parameter
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	_putchar('\n');

}
