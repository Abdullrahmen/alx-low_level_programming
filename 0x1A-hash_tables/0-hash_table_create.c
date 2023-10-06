#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	int i = 0;

	if (!size)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(*table->array) * (size + 1));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i <= size; ++i)
		table->array[i] = NULL;
	return (table);
}
