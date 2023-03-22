#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes function given as parameter
 * @array: array to iterate
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (!array || !action)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
