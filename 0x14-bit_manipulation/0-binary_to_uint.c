#include "main.h"

/**
* u_pow - unsigned n power p
* @n : number
* @p : power
* Return: n power p
*/
unsigned int u_pow(unsigned int const n, unsigned int const p)
{
	unsigned i = 0, j;

	if (p == 0)
		return (1);
	i = n;
	for (j = 1; j < p; ++j)
		i *= n;
	return (i);
}

/**
* binary_to_uint - convert a binary number to an unsigned int
* @b: char string
* Return: converted decimal number or 0 if there is an unconvertable char
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, len = 0;

	while (b[len])
		++len;

	while (b[len - j - 1] == '0' || b[len - j - 1] == '1')
	{
		if (b[len - j - 1] == '1')
			i += u_pow(2, j);
		++j;
		if (j == len)
			break;
	}
	if (j != len)
		return (0);
	return (i);
}

