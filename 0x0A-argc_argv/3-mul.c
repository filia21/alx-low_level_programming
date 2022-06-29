#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print reuslt of multiplication
 * @argc: count of parameter
 * @argv: array parameter
 * Retun: intiger value
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
