#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print name function
 * @name: first parameter
 * @f: function to print name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
