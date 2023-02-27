#include "main.h"
/**
 * _strlen - Returns length of a string
 * @str: string to be measured
 * Return: length of @str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
