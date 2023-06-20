#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers
* Return: Always 0
*/
int main(void)
{
	unsigned long int last_2[2];
	unsigned long int tmp;
	unsigned int size = 0;

	last_2[0] = 1;
	last_2[1] = 2;
	size += 1;
	printf("1, 2, ");
	while (size <= 50)
	{
		tmp = last_2[0] + last_2[1];
		printf("%ld", tmp);

		last_2[0] = last_2[1];
		last_2[1] = tmp;

		if (size != 50)
			printf(", ");
		++size;
	}
	printf("\n");
	return (0);
}

