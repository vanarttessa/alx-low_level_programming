#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 *
 * Return : Always 0(sucess)
 */
int main(void)
{
printf("Size of char: %d byte(s)\n", sizeof(char));
printf("size of int: %d byte(s)\n", sizeof(int));
printf("size of long: %d byte(s)\n", sizeof(long));
printf("size of long long int: %d byte(s)\n", sizeof(long long int));
printf("size of float: %d byte(s)\n", sizeof(float));
return (0);
}

