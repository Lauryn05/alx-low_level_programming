#include "main.h"
/**
 * _strlen - Returns the length of the string
 * @str: String to get the length of
 * Return: length of @str
 */
int _strlen(char *str)
{
	int length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}
	return (length);
}
