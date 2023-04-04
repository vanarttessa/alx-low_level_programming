#include <stdio.h>
#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @v: starting address of memory to be filled
 * @k: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *v, char k, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		v[i] = k;
		n--;
	}
	return (v);
}
