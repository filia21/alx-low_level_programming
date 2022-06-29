#include "main.h"
#include <stdio.h>
/**
 * main - prints argc
 * @argc: counter parameter
 * @argv: array parameter
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
