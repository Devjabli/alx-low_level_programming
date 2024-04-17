#include "./hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char com_f = 0;

	if (ht == NULL)
	{
		return;
	}
	else
	{
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (com_f == 1)
				printf(", ");
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			com_f = 1;
		}
		i++;
	}
	}
	printf("}\n");
}
