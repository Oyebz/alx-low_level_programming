#include "main.h"
/**
 * print_rev - print in reverse
 * @s: string
 * Return: nothing
 */

void print_rev(char *s)
{
	int longt = 0;
	int o;

	while (*s != '\0')
	{
		longt++;
		s++;
	}
	s--;
	for (o = longt; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
