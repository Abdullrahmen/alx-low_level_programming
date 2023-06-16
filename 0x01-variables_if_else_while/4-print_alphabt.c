#include <stdio.h>

/**
* main - Main function
* Description: Main function
* Return: Always 0
*/

int main(void)
{
	int n;

	for (n = 97; n < 123; ++n)
	{
		if (n != 113 && n != 101)
			putchar(n);
	}
	putchar(10);
	return (0);
}
