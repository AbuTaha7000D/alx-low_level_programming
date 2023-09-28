#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: index
 * Return: (index)th value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int buffer[100], i = 0;

	if (n == 0 && index == 0)
		return (0);

	while (n > 0)
	{
		if (n & 1)
			buffer[i] = 1;
		else
			buffer[i] = 0;
		i++;
		n = n >> 1;
	}
	if (index + 1 > i)
		return (-1);
	return (buffer[index]);
}
