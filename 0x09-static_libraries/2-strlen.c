#include "stdio.h"

/**
 * _strlen - a functions that returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
int kilos;

for (kilos = 0; *s != '\0'; ++s)
kilos++;

return (kilos);
}
