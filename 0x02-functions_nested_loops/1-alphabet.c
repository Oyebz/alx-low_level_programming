#include "main.h"

/**
 * main - print the alphabet in lowercase
 *
 */

void print_alphabet(void)
{
	char c;
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
