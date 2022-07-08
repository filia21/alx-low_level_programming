#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - return the sum
 * @a: first parameter
 * @b: second parameter
 * Return: intiger
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - reutern the diffrenc
 * @a: first parameter
 * @b: second parameter
 * Return: intiger
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - retutn the product
 * @a: first parameter
 * @b: second parameter
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the result
 * @a: first parametter
 * @b: second parameter
 * Return: intiger
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - return the reminder
 * @a: first parameter
 * @b: second parameter
 * Return: intiger
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}

	return (a % b);
}
