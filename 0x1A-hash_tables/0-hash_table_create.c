#include "hash_tables.h"

/**
 * hash_table_create - Create the hash table.
 * @size: Size of the table.
 *
 * Return: The hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table_struct = NULL;
	hash_node_t **new_table = NULL;
	unsigned long int i;


	/* allocating memory for the struct that holds the new table */
	table_struct = malloc(sizeof(hash_table_t));

	if (!table_struct)
		return (NULL);
	table_struct->size = size;
	/*allocating memory for the double pointer that serves as the table*/
	new_table = malloc(sizeof(hash_node_t *) * size);

	if (!new_table)
	{
		free(table_struct);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new_table[i] = NULL;
	}

	table_struct->array = new_table;

	return (table_struct);
}
