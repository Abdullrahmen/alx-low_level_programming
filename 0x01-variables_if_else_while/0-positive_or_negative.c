#include <stdlib.h>
#include <time.h>
/* more headers goes there */

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
	if (n > 0)
		printf("is positive");
	else if (n == 0)
		printf("is zero");
	else
		printf("is negative");
	printf("\n");
	return (0);
}

