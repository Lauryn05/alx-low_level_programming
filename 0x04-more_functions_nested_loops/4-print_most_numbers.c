#include "main.h"
/**
 * print_most_numbers - Prints 0 to 9
 * Description: Excludes 2 and 4
 * No Return
 */
void print_most_numbers(void)
{
	int x = 0;

	for (x = 45; x < 58; x++)
	{
		if (x != 2 && x != 4)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
}
