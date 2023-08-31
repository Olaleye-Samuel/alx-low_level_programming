#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - set t value of a bit to 0
 * @n: par
 * @index: index in
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clea;
	unsigned int ge;

	if (index > 64)
		return (-1);
	ge = index;
	for (clea = 1; ge > 0; clea *= 2, ge--);

	if ((*n >> index) & 1)
		*n -= clea;

	return (1);
}
