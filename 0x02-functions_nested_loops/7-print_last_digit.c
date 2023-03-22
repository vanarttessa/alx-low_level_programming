#include "main.h"

/**
 * print_last_digit - print the last digit of an integer
 * @i: Character being checked
 *
 * Return: % of i
 */
int print_last_digit(int i)
{

	int last;

	last = i  % 10;

	if (last < 0)
	{
		last *= -1;
	}

	_putchar(last + '0');

	return(last);
}
