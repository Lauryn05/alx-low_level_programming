#include "main.h"
/**
 * _puts - Prints string
 * @str: sting to print
 * No Return
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(*(str + l));
		l++;
	}
	_putchar('\n');
}
