#include "main.h"

/**
 * reverse_array - reverse the content of array
 * @a: first parameter
 * @n: second parameter
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}

