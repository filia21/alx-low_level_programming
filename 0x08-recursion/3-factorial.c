#include "main.h"
/**
 * factorial - returns factorial of intiger
 * @n: first parameter
 * Return: intiger value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n = 0)
		return (1);
	return (n * factorial(n - 1));
}
