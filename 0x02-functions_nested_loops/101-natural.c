#include <stdio.h>
/**
* multiples - Compute the multiples of n till e
* @n The basic number
* @e The maximum number excluded
* Return: The sum of the multiples
*/
int multiples(int n, int e)
{
	int i = 0, s = 0;

	while (i < e)
	{
		s += i;
		i += n;
	}
	return (s);
}

/**
* main - Main function
* Return - always 0
*/
int main(void)
{
	printf("%i\n", (multiples(3, 1024) + multiples(5, 1024)));
	return (0);
}

