#include "main.h"

/**
 * print_binary - print a binary similitude of a decimal number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int o, coun = 0;
	unsigned long int curren;

	for (o = 63; o >= 0; o--)
	{
		curren = n >> o;

		if (curren & 1)
		{
			_putchar('1');
			coun++;
		}
		else if (coun)
			_putchar('0');
	}
	if (!coun)
		_putchar('0');
}
