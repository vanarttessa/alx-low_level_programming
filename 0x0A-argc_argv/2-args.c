#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @ark: number of arguments
 * @arv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int ark, char *arv[])
{
	int z;

	for (z = 0; z < ark; z++)
	{
		printf("%s\n", arv[z]);
	}
	return (0);
}
