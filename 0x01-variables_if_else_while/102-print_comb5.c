#include <stdio.h>

/**
* main - Main function
* Description: Main function
* Return: Always 0
*/
int main(void)
{
	int n;
	int p;
	int i;
	int k;

	for (i = 0; i < 10; ++i)
	{
		for (n = 0; n < 9; ++n)
		{
			for (p = i; p < 10; ++p)
			{
				for (k = n + 1; k < 10; ++k)
				{
					putchar(i + 48);
					putchar(n + 48);
					putchar(32);
					putchar(p + 48);
					putchar(k + 48);
					if (i != 9 || n != 8 || p != 9 || k != 9)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}

	putchar(10);
	return (0);
}

