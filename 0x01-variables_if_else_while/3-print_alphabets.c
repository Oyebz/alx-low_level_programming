#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets bpth in lower and upper cases
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= '2')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
