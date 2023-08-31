#include "main.h"

/**
 * get_bit - retorns valu of a bit an index in a decimal number
 * @n: number to be searched
 * @index: an index of the bit
 *
 * Return: all value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_vol;

	if (index > 63)
		return (-1);

	bit_vol = (n >> index) & 1;

	return (bit_vol);
}
