#include "main.h"
/**
 * flip_bits - flips bits to get from one number to another
 * @n: number to convert from
 * @m: number to convert to
 * Return: number of bits you would need to
 * flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits;
	int count = 0;

	bits = n ^ m;
	while (bits)
	{
		bits = bits & (bits - 1);
		count++;
	}
	return (count);
}
