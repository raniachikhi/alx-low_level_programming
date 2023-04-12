#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * free_grid- function that frees a 2 dimensional grid previously created.
  * @grid : integer input
  * @height : integer input
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
