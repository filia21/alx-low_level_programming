#include <unistd.h>
#include "main.h"
/**
 * print_sign - Check Holberton
 * @num: An input number
 * Description: Tohis function prints the sign of the number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */
int print_sign(int num)
{
	
	int value = 0;

	if (num > 0)
	{
		value = 1;

		_putchar('+');
	}

	else if (num == 0)
		_putchar('0');

	else
	{
		value = -1;

		_putchar('-');

	}

	return (value);
}
