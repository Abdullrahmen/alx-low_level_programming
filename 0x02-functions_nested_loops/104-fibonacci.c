#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers
* Return: Always 0
*/
int main(void)
{
	unsigned long int last_2,last_1;
	unsigned long int tmp;
	unsigned int size = 0;

	last_1 = 1;
	last_2 = 2;
	size += 2;
	printf("1, 2, ");
	while (size < 98)
	{
		tmp = last_1 + last_2;
		printf("%ld", tmp);

		last_1 = last_2;
		last_2 = tmp;

		if (size != 97)
			printf(", ");
		++size;
	}
	printf("\n");
	return (0);
}

