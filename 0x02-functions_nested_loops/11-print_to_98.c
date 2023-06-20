#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from n to 98.
* @n: from number to 98
*/
void print_to_98(int n)
{
	int i;

	i = n;
	while (i != 98)
	{
		printf("%i, ", i);
		if (i > 98)
			--i;
		else
			++i;
	}
	printf("%i\n", i);
}

