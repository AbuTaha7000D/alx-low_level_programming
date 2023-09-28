#include "main.h"

/**
 * binary_to_uint - convert bin number to decimal
 * @b: binary number
 *
 * Return: decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	int	len = 0, i = 1, num = 0, temp;

	if (!b)
		return (0);
	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	while (len--)
	{
		temp = b[len] - '0';
		num += (temp * i);
		i *= 2;
	}
	return (num);
}

