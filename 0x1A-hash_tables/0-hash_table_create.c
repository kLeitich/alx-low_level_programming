#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the table
 *
 * Return: a pointer to a hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *new_hash = NULL;
	unsigned long int i = 0;

	if (size < 1)
		return (NULL);
	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
		return (NULL);
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	while (i < size)
	{
		new_hash->array[i] = NULL;
		i++;
	}
	new_hash->size = size;
	return (new_hash);
}

