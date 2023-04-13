#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @ark: number of arguments
 * @arv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int ark __attribute__((unused)), char *arv[])
{
	printf("%s\n", *arv);
	return (0);
}
