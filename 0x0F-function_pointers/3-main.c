#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: variable array
 * Return: intiger
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}

	func = get_op_func(agrv[2]);

	if (func == NULL)
	{
		printf("ERROR\n");
		exit(99);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
