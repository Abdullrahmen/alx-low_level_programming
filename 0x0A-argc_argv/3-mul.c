#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int result = 0, i = 0, j = 0, k = 1;
	char *iter;

	iter = s;
	while (*iter)
	{
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
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}

