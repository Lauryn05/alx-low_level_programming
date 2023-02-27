#include "main.h"
/**
 * _puts - Prints string
 * @str: sting to print
 * No Return
 */
void _put(char *str)
{
	for (; *str != '\0'; str++')
		_putchar(*str);
	_putchar('\n');
}
