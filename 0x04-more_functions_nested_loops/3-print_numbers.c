#include "main.h"
/**
 * print_numbers - Prints the numbers 0 to 9
 * No Return
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}