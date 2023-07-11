#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2Dimensional grid previously
 * created by my alloc_grid function
 * @grid: grid to free
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		return;
	}

	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
