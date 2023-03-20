#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - A program that prints the alphabet in lowercase and then in uppercase
 *
 * Return: always 0 (successful)
 */
int main(void)
{
	int a;
	{
	for (a = 'A' ; a <= 'Z'; a++)
		putchar(tolower(a));
	}
	{
	for (a = 'A' ; a <= 'Z'; a++)
		putchar(a);
	}
	return (0);
}
