#include <stdio.h>
#include <stdlib.h>
/**
 * main - print reuslt of multiplication
 * @argc: count of parameter
 * @argv: array parameter
 * Return: intiger value
 */
int main(int argc, char *argv[])
{
	int i, j, k, prod;

	prod = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else if (argc == 3)
	{
		for (i = 0; i < argc; i++)
		{
			if (i == 1)
				j = atoi(argv[i]);
			else if (i == 2)
				k = atoi(argv[i]);
		}
		prod = j * k;
		printf("%d\n", prod);
	}
	return (0);
}
