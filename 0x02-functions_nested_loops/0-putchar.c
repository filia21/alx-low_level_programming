#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
/**
 * main - entry point
 * Return : 0 .
 */
int main(void)
{

	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);

}
