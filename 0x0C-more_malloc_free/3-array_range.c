#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pt;
	int a, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	pt = malloc(sizeof(int) * size);
	if (pt == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		pt[a] = min++;
	return (pt);
}
