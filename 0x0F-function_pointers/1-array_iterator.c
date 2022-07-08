#include <stdlib.h>
#include "function_pointer.h"
/**
 * array_iterator -  a function that executes a function
 * @array: A pointer to array
 * @size: Size of the array
 * @action: action(function) to iterate 
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;
	for (; i < size; i++)
		action(array[i]);
}
