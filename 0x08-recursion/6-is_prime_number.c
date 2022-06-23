#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - prints prime number
 * @n: first parameter
 * Return: intiger value
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n < 3)
		return (1);
	return (is_divisable(n, civ));
}
/**
 * is_divisable - checks if number is prime or not
 * @num: first parameter
 * @div: second parameter
 * Return: intiger
 */
int is_divisable(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (is_divisable(num, div + 1));
}
