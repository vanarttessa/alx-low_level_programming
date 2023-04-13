#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ccc;
	int k, v = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;

	ccc = malloc(sizeof(char) * (k + 1));

	if (ccc == NULL)
		return (NULL);

	for (v = 0; str[v]; v++)
		ccc[v] = str[v];

	return (ccc);
}
