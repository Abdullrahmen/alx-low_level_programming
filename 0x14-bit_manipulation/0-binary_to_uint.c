#include "main.h"

/**
* u_pow - unsigned n power p
* @n : number
* @p : power
* Return: n power p
*/
unsigned int u_pow(unsigned int const n, unsigned int const p)
{
	unsigned int i = 0, j;

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
	unsigned int total, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);

	--len;
	for (power = 1, total = 0; len >= 0; len--, power *= 2)
		if (b[len] == '1')
			total += power;

	return (total);
}

