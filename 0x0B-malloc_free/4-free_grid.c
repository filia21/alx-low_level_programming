#include <stdlib.h>
#include "main.h"
/**
 * free_grid -  Entry point
 * @grid: pointer
 * @height: intiger
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
