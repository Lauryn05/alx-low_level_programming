#include "variadic_functions.h"
/**
 * sum_them_all - adds all parameters
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list list;

	va_start(list, n);
	for (a = 0; a < n; a++)
		sum = sum + va_arg(list, int);
	va_end(list);
	return (sum);
}
