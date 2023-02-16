#include <stdio.h>

int printf(const char *format, ...);

int main(void)
{
	printf("%s%s%s\n", "with proper grammar, ", "but the outcome is a piece of art", "");
	return 0;
}
