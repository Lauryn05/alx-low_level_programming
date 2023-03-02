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
	int a, i;

	while (dest[i])
	{
		i++;
	}

	for (i = 0; src[a] != '\0'; a++)
	{
		dest[i] = src[a];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
