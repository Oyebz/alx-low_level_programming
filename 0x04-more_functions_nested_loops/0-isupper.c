#include "main.h"

/**
 * main - checks for upperscase
 *
 * Return: Always 0
 */
int _isupper(int c);
{
	int c;

	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
