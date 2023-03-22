#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer.
 * @array: array to search in
 * @size: number of elements in array
 * @cmp: pointer to function to compare
 * Return: first value of a where cmp function is not 0 and -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
				return (a);
		}
	}
	return (-1);
}
