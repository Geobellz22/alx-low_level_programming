#include "main.h"
/**
 * free_grid - funxtion frees a 2 dimensional grid
 * @grid: 2D array to be freed
 * @height: row of the array
 * Return: NOTHING
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[i]);
	free(grid);
}
