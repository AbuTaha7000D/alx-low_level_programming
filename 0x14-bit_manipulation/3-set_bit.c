#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: decimal number
 * @index: index to change
 * Return: the new value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int jocker = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	jocker <<= index;
	*n = (*n | jocker);
	return (*n);
}
