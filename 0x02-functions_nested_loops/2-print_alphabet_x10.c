#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int i;

	char alp;

	for (i = 0; i < 10; i++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)

			_putchar(alp);

		_putchar('\n');

	}

}
