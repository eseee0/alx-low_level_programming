#include "main.h"

/**
 * print_binary - prints binary equivalent of a dec no.
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int same;

	for (i = 63; i >= 0; i--)
	{
		same = n >> i;

		if (same & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
