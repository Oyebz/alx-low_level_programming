#include "main.h"

/**
 * rev_string- Reverse a string
 * @s: Input string
 * Return: string in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int countet = 0;
	int i;

	while (s[countet] != '\0')
		countet++;
	for (i = 0; i < countet; i++)
	{
		countet--;
		rev = s[i];
		s[i] = s[countet];
		s[countet] = rev;
	}
}
