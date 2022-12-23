#include "main.h"

/**
 * _strncat - concatentate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n);
{
	int d, i;

	d = 0;

	while (dest[d])
	{
		d++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[c + i] = src[i];
		dest[c + i] = '\0';


	return (dest);
}
