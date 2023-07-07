#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp != NULL)
		{
			hash_node_t *tmp_node = tmp;

			tmp = tmp->next;
			free(tmp_node->key);
			free(tmp_node->value);
			free(tmp_node);
		}
	}

	free(ht->array);
	free(ht);
}
