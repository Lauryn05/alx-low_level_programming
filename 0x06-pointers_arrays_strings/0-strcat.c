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
	int a = -1;
	int i;

	for (i =  0; dest[i] != '\0')
		i++;
	do {
		a++;
		dest[i] = src[a];
		i++;
	} while (src[a] != '\0');
	return (dest);
}
