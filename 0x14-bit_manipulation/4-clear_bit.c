#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: Address of the number
 * @index: index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int jocker = 1;

	if (index > sizeof(*n) * 8)
		return (-1);

	jocker <<= index;
	jocker = ~jocker;
	*n = (*n & jocker);
	return (1);
}
