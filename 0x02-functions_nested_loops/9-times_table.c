#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0.
*/
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; ++i)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1; j < 10; ++j)
		{
			k = j * i;
			_putchar(' ');

			if (k >= 10)
			{
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(k + 48);
			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}

