#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - perform squre root
 * @n: first parameter
 * Return: intigers
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - perform artimetic fucyion
 * @i: first parameter
 * @j: second parameter
 * Return: intiger
 */
int _sqrt(int i, int j)
{
	if (i > j)
		return (-1);
	else if (i * i == j)
		return (i);
	return (_sqrt(i + 1, j));

}
