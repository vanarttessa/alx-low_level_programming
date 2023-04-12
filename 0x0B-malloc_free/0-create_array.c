#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * create_array - creates an array of characters and initialize it with a char
 * @c - character
 * @size: size of character
 * Return: pointer to array if successful
 * NULL if unsuccessful
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *v;

	if (size == 0)
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
