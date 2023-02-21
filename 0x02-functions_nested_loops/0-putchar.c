#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	char word[] = "_putchar";
	int i, j;

	for (i = 0; i < 1; i++)
	{
		for (j = 0; j < sizeof(word) - 1; j++)
		{
			putchar(word[j]);
		}
	putchar('\n');
	}
	return (0);
}
