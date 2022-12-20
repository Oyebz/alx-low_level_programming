#include "main.h"

/**
 * print rev - prits a string in reverse, followed by a new line
 * @s: string parameter in reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
int vibe;
int p;
while (*s != '\0')

{
vibe++;
s++;
}
s--;
for (p = vibe; p > 0; p--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
