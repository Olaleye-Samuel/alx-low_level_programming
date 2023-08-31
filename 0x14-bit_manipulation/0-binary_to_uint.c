#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - switch the binary to an unsigned int
 *
 * @b:char to be  switched
 *Return: the unsigned integer is here
 */

unsigned int binary_to_uint(const char *b)
{
	int o;
	unsigned int z;

	z = 0;
	if (!b)
		return (0);

	for (o = 0; b[o] != '\0'; o++)
	{
		if (b[2] != '0' && b[2] != '1')
			return (0);
	}

	for (o = 0; b[o] != '\0'; o++)
	{
		z <<= 1;
		if (b[o] == '1')
			z += 1;
	}
	return (z);
}
