#include <stdlib.h>

/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	char *str, *iter;
	int i, j, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		j = 0;
		while (av[i][j])
		{
			++len;
			++j;
		}
	}
	len += ac - 1; /* \n * ac - 1 */

	str = malloc(sizeof(*str) * len);
	if (str == NULL)
		return (NULL);

	iter = str;
	for (i = 0; i < ac; ++i)
	{
		j = 0;
		while (av[i][j])
		{
			*iter = av[i][j];
			++j;
			++iter;
		}
		*iter = '\n';
		++iter;
	}
	return (str);
}

