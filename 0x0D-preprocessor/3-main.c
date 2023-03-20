#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check code 
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;

	a = ABS(-98) * 10;
	b = ABS(98) * 10;
	printf("%d, %d\n", a, b);
	return (0);
}


