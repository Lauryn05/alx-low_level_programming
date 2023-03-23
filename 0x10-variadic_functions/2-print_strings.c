#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: strings that seperates strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *st;
	va_list list;

	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		st = va_arg(list, char*);
		if (!st)
			st = "(nil)";
		if (!separator)
			printf("%s", st);
		else if (separator && a == 0)
			printf("%s", st);
		else
			printf("%s%s", separator, st);
	}
	va_end(list);
	printf("\n");
}
