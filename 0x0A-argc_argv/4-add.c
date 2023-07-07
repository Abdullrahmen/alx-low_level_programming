#include <stdio.h>

/**
 * _atoi_positive - converts a string to a positive integer
 * @s: string to be converted
 *
 * Return: the int converted from the string or -1 if error
 */
int _atoi_positive(char *s)
{
	int result = 0, i = 0, j = 0, k = 1;
	char *iter;

	iter = s;
	while (*iter)
	{
		if (*iter < '0' || *iter > '9')
			return (-1);
		++iter;
		++i;
	}

	iter = s;
	while (i)
	{
		for (j = 0, k = 1; j < i - 1; ++j)
			k *= 10;

		result += k * ((int)(*iter) - 48);
		--i;
		++iter;
	}
	return (result);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc - 1; ++i)
	{
		j = _atoi_positive(argv[i + 1]);
		if (j == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += j;
	}
	printf("%d\n", sum);
	return (0);
}

