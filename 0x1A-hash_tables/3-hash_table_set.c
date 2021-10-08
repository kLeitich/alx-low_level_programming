#include "hash_tables.h"

/**
 * add_node - adds a new node for the hash
 * @head: pointer to the nodes
 * @key: the key, can not be an empty string
 * @val: value associated with the key
 *
 * Return: new pointer to node
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *val)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(val);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: pointer to a hash table
 * @key: the key, can not be an empty string
 * @value: value associated with the key
 *
 * Return: 1 if it succeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *aux = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[index];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}
	new = add_node(&(ht->array[index]), key, value);
	if (new == NULL)
		return (0);
	return (1);
}

