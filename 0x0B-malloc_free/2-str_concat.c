#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i = 0, len = 0;

	while (s1[i])
		++i;
	len += i;

	i = 0;
	while (s2[i])
		++i;
	len += i + 1;

	s3 = malloc(sizeof(*s3) * len);
	if (s3 == NULL)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		s3[i] = s1[i];
		++i;
	}
	len = i;

	i = 0;
	while (s2[i])
	{
		s3[len + i] = s2[i];
		++i;
	}
	return (s3);
}

