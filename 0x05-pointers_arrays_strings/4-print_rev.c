#include "main.h"

/**
 * print_rev - prits a string in reverse, followed by a new line
 * @s: string parameter in reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
int index;

for (index = 0; s[index] != '\0'; ++index)

for (--index; index >= 0; --index)
_putchar(s[index]);
_putchar('\n');
}
