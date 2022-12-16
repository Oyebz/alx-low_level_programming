#include "main.h"

/**
 * main - checks for upperscase
 *@c: the character to be checked
 * Return: 1 if is uppercase, 0 if otherwise
 */
int _isupper(int c);
{

	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
