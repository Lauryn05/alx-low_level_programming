#include "main.h"
/**
 * _strncpy - copies inputted number of bytes from src to dest
 * @dest: buffer storing string copy
 * @src: source string
 * @n: max bytes copied from src
 * Return: pointer to resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
