#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int x, y, z, a;

	for (x = 0; x < 10; x++)
	{
		for (y = x; y < 10; y++)
		{
			for (z = y; z < 10; z++)
			{
				for (a = z; a < 10; a++)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					putchar(a + '0');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
