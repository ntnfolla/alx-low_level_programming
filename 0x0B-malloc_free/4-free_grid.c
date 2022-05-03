#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid
 * @grid: grid
 * @height: number of row
 * Return: pointer to matrix
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
	free(*(grid + i));
free(grid);
}
