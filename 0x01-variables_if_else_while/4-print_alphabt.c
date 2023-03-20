#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints the alphabet in lowercase followed by a new line
 *
 * Return: always 0(successful)
 */
int main(void)
{
	int x;
	{
	for (x = 97 ; x <= 122; x++)
	for (x != 101 ; x != 113; x++)
		putchar(x);
	}
	putchar('\n');

	return (0);
}
