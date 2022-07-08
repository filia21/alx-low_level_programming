#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - A function that sums
 *  @n: number of parameters
 *  @...: Other parameters
 *  Return: The of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list j;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(j, n);
	for (; i < n; i++)
		sum += va_arg(j, int);

	va_end(j);
	return (sum);
}
