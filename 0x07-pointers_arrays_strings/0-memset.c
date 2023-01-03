#include "main.h"

/**
 * _memset - a function that fills
 * memory with constanst byte
 *
 * @s: input pointer to char type
 * represent the pointer to the block of memory to fill
 * @b: input variable of char type
 * represent the character to fills
 * @n: unsigned int variable
 * the number of bytes to be filled
 *
 * Return: a pointer to the filled memory
 *  area@s
 */

char *_memset(char *s, char b, unsigned int n);
{
	/**
	 * declare an unsigned int
	 * because of what we want to store
	 * a value that should remain non-negative
	 */
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
