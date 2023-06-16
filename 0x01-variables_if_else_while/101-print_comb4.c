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

	for (i = 0; i < 8; ++i)
	{
		for (n = i + 1; n < 9; ++n)
		{
			for (p = n + 1; p < 10; ++p)
			{
				putchar(i + 48);
				putchar(n + 48);
				putchar(p + 48);
				if (i != 7 || n != 8 || p != 9)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}

