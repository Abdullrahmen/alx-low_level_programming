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

	i = 0;

	for (i = 0; i < 10; ++i)
	{
		n = 0;
		k = n + 1;
		p = i;

		for (; n < 10; ++n, k = n + 1, p = i)
		{
			for (; p < 10; k = 0, ++p)
			{
				for (; k < 10; ++k)
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
					else
					{
						putchar(10);
						return (0);
					}
				}
			}
		}
	}
	return (0);
}

