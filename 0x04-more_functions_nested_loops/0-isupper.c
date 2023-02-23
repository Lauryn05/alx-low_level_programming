#include "main.h"
/**
 * _isupper - Checks if a letter is upper case
 * @x: number checked
 * Return: 1 for upper or 0 for any other
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
