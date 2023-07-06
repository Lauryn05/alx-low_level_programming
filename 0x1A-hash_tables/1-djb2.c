#include "hash_tables.h"
/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int a;
	unsigned long int  hash;

	hash = 5381;
	while ((a = *str++))
		hash = ((hash << 5) + hash) + a;/* hash * 33 + a */
	return (hash);
}
