#include "main.h"
/**
 * _strcmp - Compares pointers to 2 strings
 * @s1: pointer to first string to be compared
 * @s2: pointer to second string to be compared
 * Return: if str1 < str2, negative difference of first unmatched characters
 * if str1 == str2, 0
 * if str1 > str2, positive difference of first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
