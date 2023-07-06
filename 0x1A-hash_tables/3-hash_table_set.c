#include "hash_tables.h"
/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Return: Upon failure - 0 Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index, a;
	char *cp_val;

	if (key == NULL || ht == NULL || value == NULL || *key == '\0')
		return (0);
	cp_val = strdup(value);
	if (cp_val == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (a = index; ht->array[a]; a++)
	{
		if(strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = cp_val;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(cp_val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = cp_val;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
