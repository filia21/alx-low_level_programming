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

	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)

			if (i == c || j == C)

				loup = 1;
	}

	return (loup);

}

