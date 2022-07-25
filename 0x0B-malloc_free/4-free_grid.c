#include "main.h"
#include <stdlib.h>

/**
 * * free_grid - a function that frees a 2 dimensional grid previously
 * * created by your alloc_grid function.
 * *
 * * @grid: the address of the two dimensional grid
 * * @height: height of the grid
 * *
 * * Return: address of the newly allocated memory
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
