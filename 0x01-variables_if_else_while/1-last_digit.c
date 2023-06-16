#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Main function
* Description: Main function
* Return: Always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);

	if (n % 10 > 5)
		printf("%i and is greater than 5", n % 10);
	else if (n % 10 == 0)
		printf("%i and is 0", n % 10);
	else if (n % 10 < 6)
		printf("%i and is less than 6 and not 0", n % 10);

	printf("\n");
	return (0);
}

