#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int jocker = 1;
	char *endian = (char *) &jocker;

	if (*endian)
		return (1);
	return (0);
}
