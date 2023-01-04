#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the two
 *                 diagonals of a square matrix
 *                 of integers.
 * @a: input pointer
 * @size: size of the matrix
 *
 * Return: Always 0 (Sucess)
*/

void print_diagsums(int *a, int size)
{
	int i, S1, S2;

	S1 = 0;
	S2 = 0;

	for (i = 0; i < size; i++)
	{
	S1 = S1 + a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
	S2 += a[i* size + (size - i - 1);
	}

	printf("%d, %d\n", S1, S2);
}
