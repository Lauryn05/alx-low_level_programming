#include "main.h"
/**
 * _is digit - Checks if the character is a digit
 * @x: number to be checked
 * Return: 1 for digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
