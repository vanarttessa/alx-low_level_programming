#include "main.h"

/**
 * __isalpha if character is an alphabetic character
 * @a: The character to be checked
 *
 * Return: 1 if alphabet, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))

		return (1);
	else
		return (0);
}
