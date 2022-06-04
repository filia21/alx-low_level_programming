#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	char tmp;

	for (d = '0'; d <= '9'; d++)

		putchar(d);

	for (tmp = 'a'; tmp <= 'f'; tmp++)

		putchar(tmp);

	putchar('\n');

	return (0);

}
