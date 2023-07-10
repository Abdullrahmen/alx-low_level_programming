#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *str2, *iter;
	int i, len = 0;


	if (str == NULL)
		return (NULL);

	iter = str;
	while (*iter)
	{
		++iter;
		++len;
	}
	++len;

	str2 = malloc(sizeof(char) * len);
	if (str2 == NULL)
		return (NULL);


	iter = str2;
	for (i = 0; i < len; ++i, ++str, ++iter)
		*iter = *str;
	return (str2);
}

