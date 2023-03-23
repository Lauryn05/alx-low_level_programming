#include "variadic_functions.h"
/**
 * print_all - prints everything
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	int a;
	char *st;
	char *separator = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 's':
					st = va_arg(list, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", separator, st);
					break;
				default:
					a++;
					continue;
			}
			separator = ", ";
			a++;
		}
	}
	va_end(list);
	printf("\n");
}

