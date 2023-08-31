#include "main.h"

/**
 * set_bit - set a bitat a given index to 1
 * @n: the pointer to the number to changes
 * @index: the index of the bit to set to 1
 *
 * Return: 1 for the success, -1 forfailure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sa;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	sa = 1 << index;
	*n = *n | sa;
	return (1);
}
