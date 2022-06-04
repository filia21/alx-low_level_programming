#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char tmp;
	for (i = 0; i <= 9; i++)
		putchar(i);
	for (tmp = 'a'; tmp <= 'f'; tmp++)
		putchar(tmp);
	putchar('\n');
	return (0);
}
