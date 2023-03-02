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
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[1] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
