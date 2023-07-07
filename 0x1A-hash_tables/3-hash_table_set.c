#include "hash_tables.h"

/* helper functions */
hash_node_t *create_hash_node(const char *key, const char *value);

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: pointer to the hash table
 * @key: the key to hash
 * @value: the value to stroe
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp  = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);

			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}

		tmp = tmp->next;
	}

	new_node = create_hash_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * create_hash_node - create a new hash node with key and value
 *
 * @key: the key of the node
 * @value: the value of the node
 *
 * Return: pointer to the created node
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->next = NULL;
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	return (new_node);
}
