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

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		putchar(',');
		putchar(' ');

	}

	putchar('\n);

	return (0);

}
