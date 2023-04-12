#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * simple_print_array and char - prints char in c
 * @char: the address of memory to print
 * @size: the size of the memory to print
 * Return: char to array if successul
 * Return: null if unsuccessful
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *v;

	if (size == 0 )
	{
		return (NULL);
	}
	v = malloc(size * sizeof(char));

	if (v == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		v[i] = c;
	}
	return (v);
}
