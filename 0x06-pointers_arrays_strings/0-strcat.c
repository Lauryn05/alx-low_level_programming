#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concecrates 2 strings
 * @dest: destination string
 * @src: source string
 * Return: Pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *a;
	char *i;

	a = dest;
	i = src;

	while (*a != '\0')
	{
		a++;
	}

	while (*i != '\0')
	{
		*a = *i;
		a++;
		i++;
	}
	*i = '\0';
	return (dest);
}
