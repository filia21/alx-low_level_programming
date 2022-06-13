#include "main.h"

/**
 * swap_int - function to swap values
 * @a: pointer variable
 * @b: another pointer variable
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
