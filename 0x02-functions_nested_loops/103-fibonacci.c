#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers
* Return: Always 0
*/
int main(void)
{
	unsigned long int last_2[2];
	unsigned long int tmp;
	unsigned long int sum = 0;

	last_2[0] = 1;
	last_2[1] = 2;
	sum += 2;
	tmp = last_2[0] + last_2[1];
	while (tmp < 4000000)
	{
		if ((tmp % 2) == 0)
			sum += tmp;

		last_2[0] = last_2[1];
		last_2[1] = tmp;

		tmp = last_2[0] + last_2[1];
	}
	printf("%li\n", sum);
	return (0);
}

