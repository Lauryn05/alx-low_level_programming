#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to check from
 * @index: index of the bit to be set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);
	for (i = 1; index > 0; index--, i = i * 2)
		;
	*n = *n + i;
	return (1);
}
