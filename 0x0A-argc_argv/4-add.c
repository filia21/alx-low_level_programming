#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - add positive intiger
 * @argc: first parameter
 * @argv: second parameter
 * Return: intiger
 */
int main(int argc, char *argv[])
{
	int num, res = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}

		}
		num = atoi(argv[argc]);
		res += num;
	}
	printf("%d\n", res);
	return (0);
}

