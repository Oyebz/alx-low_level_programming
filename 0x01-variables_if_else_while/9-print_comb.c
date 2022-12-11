#include <stdio.h>

/**
 * main - prints all possible combinationsof single-digi numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 58; n < 68; n++)
	{
		putchar(n);
		if (n != 67)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
