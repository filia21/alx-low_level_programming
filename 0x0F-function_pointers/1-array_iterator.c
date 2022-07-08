#include <stdlib.h>

/**
 * array_iterator - function to iterat elements
 * @array: first parameter
 * @size: array size
 * @action: funcion pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || action == NULL)
		return;

	for(; i < size; i++)
		action(array[i]);
}
