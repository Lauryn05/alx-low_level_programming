#include "main.h"
/**
 * puts_half -prints half of a string
 * @str: String to print
 * No Return
 */
void puts_half(char *str)
{
	int j = 0;
	int k, l;

	while (*(str + j) != '\0')
	{
		j++;
	}
	if (j % 2 == 0)
	{
		k = j / 2;
		for (l = k; l <= (j - 1); l++)
		{
			_putchar(*(str + l));
		}
	}
	else
	{
		k = (j - 1) / 2;
		for (l = (k + 1); l <= (j - 1); l++)
		{
			_putchar(*(str + l));
		}
	}
	_putchar('\n');
}
