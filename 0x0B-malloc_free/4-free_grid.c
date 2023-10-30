#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Releases memory allocated for a 2-dimensional array of integers.
 * @grid: The 2-dimensional array of integers to be deallocated.
 * @height: The height of the grid array.
 */

void free_grid(int **grid, int height)
{
	int index = 0;

	while (index < height)
	{
		free(grid[index]);
		index++;
	}
	free(grid);
}
