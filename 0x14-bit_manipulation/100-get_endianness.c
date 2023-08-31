#include "main.h"

/**
 * get_endianness - check allover the endianness
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int x;
	char *o;

	x = 1;
	o = (char *)&x;
	return (*o);
}
