#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 *
 * Return: string in reverse
 */

void rev_string(char *s)
{
char rev = s[0];
int smooce = 0;
int i;
while (s[smooce] != '\0')
smooce++;

for (i = 0; i < smooce; i++
{
smooce--;
rev = s[i];
s[i] = s[smooce];
s[smooce] = rev;
}
}
