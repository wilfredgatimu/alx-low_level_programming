#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * free_grid - it frees the 2d arrays
 * @grid: 2d grid
 * @height: height dimension of grids
 * Description: frees memory of grids
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
