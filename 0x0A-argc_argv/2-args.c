#include "main.h"
#include <stdio.h>
/**
 * main - print out all arguments
 * @argc: argument counter
 * @argv: array parameter
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	while(argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
