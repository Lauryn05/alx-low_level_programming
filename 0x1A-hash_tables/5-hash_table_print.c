#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned char flag = 0;
	unsigned long int a;
	hash_node_t *node;

	if (ht == NULL)
		return;
	print("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a != NULL])
		{
			if (flag == 1)
				printf(", ");
			node = ht->array[a];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
