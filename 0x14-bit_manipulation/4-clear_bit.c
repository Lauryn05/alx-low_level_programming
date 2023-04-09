#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to check from
 * @index: index from n to change to 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a, temp;

	if (index > 63)
		return (-1);
	temp = index;
	for (a = 1; temp > 0; a = a * 2, temp--)
		;
	if ((*n >> index) & 1)
		*n = *n - a;
	return (1);
}
