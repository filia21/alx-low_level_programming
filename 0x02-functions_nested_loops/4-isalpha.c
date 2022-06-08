#include <unistd.h>
#include "main.h"
/**
 * _isalpha - Check main
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _isalpha(int c)
{

	int loup = 0;

	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c || i == C)

			loup = 1;
	}

	return (loup);

}

