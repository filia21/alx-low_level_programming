#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - Check Holberton
 * @num: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number num
 */
int print_last_digit(int num)
{

	int n;

	if (num < 0)
		n = -1 * (num % 10);
	else
		n = num % 10;

	_putchar(n);

	return (n);

}
