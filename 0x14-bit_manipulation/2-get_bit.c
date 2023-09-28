#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: index
 * Return: (index)th value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int joker = 1;

	if (index >= sizeof(n) * 8)
		return (-1);
	joker <<= index;
	if ((joker & n) != 0)
		return (1);
	else
		return (0);
	return (-1);
}
