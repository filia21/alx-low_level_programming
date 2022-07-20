#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *  print_strings - A function that print strings
 *  @separator: An input string
 *  @n: number of parameters
 *  @...: Other parameters
 *  Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *string;

	va_start(ap, n);
	for (; i < n; i++)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}