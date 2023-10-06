#include "hash_tables.h"

/**
 * key_index - function that returns the index of a key
 * @key: The key to be hashed
 * @size: size of the array in the table
 * Return: index of the key to be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (key == NULL || size <= 0)
	{
		return (0);
	}

	hash = hash_djb2(key);
	return (hash % size);
}
