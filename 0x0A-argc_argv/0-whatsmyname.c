#include "main.h"
#include <stdio.h>
/**
 * main - prints the executable file name
 * @argc: argument counter parameter
 * @agrv: array character parameter
 * Return: intiger value
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
