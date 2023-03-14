#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *pt;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	pt = malloc(sizeof(char) * (len1 + len2 + 1));
	if (pt == NULL)
		return (NULL);
	a = 0;
	b = 0;
	if (s1)
	{
		while (a < len1)
		{
			pt[a] = s1[a];
			a++;
		}
	}

	if (s2)
	{
		while (a < (len1 + len2))
		{
			pt[a] = s2[b];
			a++;
			b++;
		}
	}
	pt[a] = '\0';

	return (pt);
}
