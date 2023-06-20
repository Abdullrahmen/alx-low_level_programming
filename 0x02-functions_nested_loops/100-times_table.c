#include "main.h"

/**
* print_times_table - prints the n times table, starting with 0.
* @n: number
*/
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; ++i)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1; j <= n; ++j)
		{
			k = j * i;
			if (k >= 100)
			{
				_putchar(' ');
				k /= 100;
				_putchar(k + 48);
				k = ((j * i) / 10) % 10;
				_putchar(k + 48);
				k = (j * i) % 10;
				_putchar(k + 48);
			}
			else if  (k >= 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + 48);
			}
			if (j != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}

