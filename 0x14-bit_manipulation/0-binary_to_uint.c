#include "main.h"

/**
 * binary_to_uint - converts a binary digit to an unsigned int
 * @b: string holding the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decmlval = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decmlval = 2 * decmlval + (b[i] - '0');
	}

	return (decmlval);
}
