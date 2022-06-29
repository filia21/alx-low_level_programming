#include <stdio.h>
#include <stdlib.h>
/**
 * main - print reuslt of multiplication
 * @argc: count of parameter
 * @argv: array parameter
 * Return: intiger value
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc == 1 || argc == 2)
	{
		printf("ERROR\n");
		return (1);
	}
	else
	{
		num1 = 1;

		for (num2 = 1; num2 < 3; num2++)
			num1 *= atoi(agrv[num2]);

		printf("%d\n", num1);
	}

	return (0);
}
