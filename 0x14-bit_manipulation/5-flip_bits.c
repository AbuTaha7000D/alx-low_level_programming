#include "main.h"

/**
 * flip_bits - returns the no of bits needed to flib
 * @n: the number to flib
 * @m: the result
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int f = 0, mm, nn;

	while (m || n)
	{
		mm = (m & 1);
		nn = (n & 1);
		if (!(mm ^ nn ^ 1))
			f++;
		m >>= 1;
		n >>= 1;
	}
	return (f);
}
