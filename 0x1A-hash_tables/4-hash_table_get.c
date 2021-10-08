#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value from a key
 * @ht: a pointer to the hash table
 * @key: the key
 *
 * Return: the value retrieved
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *aux = NULL;
	unsigned long int index = 0;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			return (aux->value);
		}
		aux = aux->next;
	}
	return (NULL);
}

