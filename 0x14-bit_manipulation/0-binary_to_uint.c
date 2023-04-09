#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: pointer to a string of 0 and 1 chars
 * Return: 0 if fail and the unsigned integer if success
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int num, exp;

	if (b == NULL)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (exp = 1, num = 0, len--; len >= 0; len--, exp = exp *  2)
	{
		if (b[len] == '1')
			num = num + exp;
	}
	return (num);
}
