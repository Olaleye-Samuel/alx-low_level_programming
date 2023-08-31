#include "main.h"

/**
 * flip_bits - count them bits to change
 * @n: no p
 * @m: no p
 *
 * Return: numbers of bit to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int o, z = 0;
	unsigned long int cu;
	unsigned long int exm = n ^ m;

	for (o = 63; o >= 0; o--)
	{
		cu = exm >> i;
		if (cu & 1)
			z++;
	}

	return (z);
}
