#include "main.h"
/**
 * swap_int - Swaps value of 2 integers
 * @a: first integer
 * @b: second integer
 * No Return
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
