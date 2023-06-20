#include <stdio.h>
/**
* get_first_digit - gets first digit of n
* @n: the number
* Return: the first digit
*/
int get_first_digit(unsigned long int n)
{
	while (n >= 10)
		n %= 10;
	return (n);
}


/**
* main - prints the first 50 Fibonacci numbers
* Return: Always 0
*/
int main(void)
{
	unsigned long int last_1 = 0, last_2 = 0;
	unsigned long int addition = 0;
	unsigned int size = 0;


	last_1 = 1;
	last_2 = 2;
	size += 2;
	printf("1, 2, ");

	while (size < 98)
	{
		addition = last_1 + last_2;
		if (get_first_digit(addition) == 1 || get_first_digit(addition) == 2)
		{
			printf("%ld", addition);


			if (size != 97)
				printf(", ");
			++size;
		}
		last_1 = last_2;
		last_2 = addition;
	}
	printf("\n");
	return (0);
}

