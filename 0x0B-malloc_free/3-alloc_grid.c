#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **ary;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);
	ary = (int **) malloc(sizeof(int *) * height);
	if (ary == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		ary[a] = (int *) malloc(sizeof(int) * width);
		if (ary[a] == NULL)
		{
			free(ary);
			for (b = 0; b <= a; b++)
				free(ary[b]);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			ary[a][b] = 0;
		}
	}
	return (ary);
}
