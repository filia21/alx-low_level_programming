#include "main.h"

/**
 * reverse_array - function to reverse content of array
 * @a: first intiger pointer
 * @n: second intiger parameter
 * Return: Nothing 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	int tmp;

	while (i < n--)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n] = tmp;
	}

}
