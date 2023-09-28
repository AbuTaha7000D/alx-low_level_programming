#include "main.h"

/**
 * conv - convert decimal to binary
 * @n: decimal number
 */
void conv(unsigned long int n)
{
	if (n == 0)
		return;
	
	if (n > 0)
		conv(n >> 1);
	
	if (n & 1)
		printf("1");
	else
		printf("0");
}

/**
 * print_binary - print binary number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
		return;
	}
	else
		conv(n);
}
