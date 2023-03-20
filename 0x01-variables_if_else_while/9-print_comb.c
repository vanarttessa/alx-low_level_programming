#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all possible combinations of single-digit numbers
 *
 * Return : always 0 (success)
 *
 */
int main(void)
{
	int i;

	for (x = 48 ; x <= 57 ; x++)
	{
		putchar (x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n')
		return (0);
}

