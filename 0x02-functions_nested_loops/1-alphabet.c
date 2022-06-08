#include<unistd.h>
#include "main.h"
/**
* main - Entry point
* Return: Always 0 (Success
*/
int main(void)
{
	print_alphabet();

	return (0);

}
/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{

	char i;

	for (i = 'a';i <= 'z';i++)
		_putchar(i);
	_putchar('\n');

}

