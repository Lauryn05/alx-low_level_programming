#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to find the bit from
 * @index: the index of the bit you want to get from n
 * Return: value of the bit at index index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	n = n >> index;
	return (n & 1);
}
