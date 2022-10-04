#include "main.h"
/**
 * free_grid - allocates grid, make free space
 * @grid: takes widht of grid
 * @height: grid height
 * Return: free grid
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
