#include "main.h"
/**
 * leet - encode into 1337speak
 * @s: input value
 * Return: s
 */
char *leet(char *s)
{
	int count = 0, j;
	int s1[] = {97, 101, 111, 116, 108};
	int s2[] = {65, 69, 79, 84, 76};
	int nos[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + count) == s1[j] || *(s + count) == s2[j])
			{
				*(s + count) = nos[j];
			}
		}
		count++;
	}
	return (s);
}
