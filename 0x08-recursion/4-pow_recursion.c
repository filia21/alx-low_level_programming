#include "main.h"
/**
 * _pow_recursion - returns the exponential product
 * @x: first parameter
 * @y: second parameter
 * Return: intiger value
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 1)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));

}
