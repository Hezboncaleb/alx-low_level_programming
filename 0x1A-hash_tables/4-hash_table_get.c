#include "hash_tables.h"

/**
 * hash_table_get - function that returns the value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: the value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
	if (strcmp(node->key, key) == 0)
		return (node->value);
	node = node->next;
	}
	return (NULL);
}
