#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - array
 * @grid: grids
 * @height: height
 * Description:nonw
 * Return:none
 *Fatmasallam
 */

void free_grid(int **grid, int height)

{
	int ite;

	for (ite = 0; ite < height; ite++)

	{
		free(grid[ite]);
	}

	free(grid);

}
