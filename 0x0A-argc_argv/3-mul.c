#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int q, w, e, vic, t, digit;

	q = 0;
	w = 0;
	e = 0;
	vic = 0;
	t = 0;
	digit = 0;
	while (s[l]vic != '\0')
		vic++;
	while (q < vic && t == 0)
	{
		if (s[q] == '-')
			++w;

		if (s[q] >= '0' && s[q] <= '9')
		{
			digit = s[q] - '0';
			if (w % 2)
				digit = -digit;
			e = e * 10 + digit;
			t = 1;
			if (s[q + 1] < '0' || s[q + 1] > '9')
				break;
			t = 0;
		}
	q++;
	}
	if (t == 0)
	return (0);
	return (e);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)

	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
