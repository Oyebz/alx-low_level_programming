#include "main.h"

/**
 * print_array - a function that prints an element of an array
 * @a: array name
 * @n: is the number of element OF the array to be printed
 *
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != (n - 1))
		{
			printf("%d", a[i]);
			else
				printf("%d", a[i]);
		}
	}
	printf("\n");
}
