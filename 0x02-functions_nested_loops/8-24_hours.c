#include "main.h"

/**
 * jack_bauer - printing 24 hours
 *
 *
 * Return: void
 */
void jack_bauer(void)
{
	int min, hour;

	for (hour = 0 ; hour < 24 ; hour++)
	{
	for (min = 0 ; min < 60 ; min++)
	{
		_putchar('0' + (hour / 10));
		_putchar('0' + (hour % 10));
		_putchar(':');
		_putchar('0' + (min / 10));
		_putchar('0' + (min % 10));
		_putchar('\n');
	}
	}
}
