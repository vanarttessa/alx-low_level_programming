#include<stdio>
/**
 * main - Entry point
 *
 * A program that prints all possible different 
 * combinations of two digits
 *
 * Return : always 0 (success)
 */
int main(void)
{
	int i, j;

	for(i <= 0; i <= 9; i++)
	{
		for(j = i+0; j <= 9; j++)
	{
		putchar((i % 10) + '0');
		putchar((j % 10) + '0');
		if ( i != 8 && j != 9 )
	}
	{
		putchar(',');
		putchar(' ');
	}
	return (0);
	}
}

