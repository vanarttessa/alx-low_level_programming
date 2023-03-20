#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - 7-print_tebahpla.c
 *
 * Return: always 0 (successful)
 */
int main(void)
{
	int a;
	{
		for (a = 'Z' ; a >= 'A'; a--)
			putchar(tolower(a));
	}
	putchar('\n');

	return (0);
}
