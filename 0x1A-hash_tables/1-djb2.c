#include "hash_tables.h"

/**
 * hash_djb2 - djb2 algorithm
 * @str: string to hash
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;

	while (*str)
	{
		hash = ((hash << 5) + hash) + *str;
		str++;
	}

	return (hash);
}
