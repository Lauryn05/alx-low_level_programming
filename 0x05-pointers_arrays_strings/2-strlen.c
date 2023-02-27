#include "main.h"
#include <stddef.h>
/**
 * _strlen - Returns the length of the string
 * @str: String to get the length of
 * Return: length of @str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
       return (length);
}       
