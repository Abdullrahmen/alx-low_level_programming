#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int n_coins = 0, i = 0, cents;
	int coins_l[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; ++i)
		while (cents >= coins_l[i])
		{
			cents -= coins_l[i];
			++n_coins;
		}
	printf("%d\n", n_coins);
	return (0);
}

