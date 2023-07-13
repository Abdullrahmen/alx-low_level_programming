#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i = 0, len = 0;

	if (s2)
		while (s2[len])
			++len;
	if (n > len)
		n = len;

	if (s1)
		while (s1[i])
			++i;
	len = n + i + 1; /* + null char */

	concat = malloc(sizeof(*concat) * len);
	if (!concat)
		return (NULL);

	for (len = 0; len < i; ++len)
		concat[len] = s1[len];

	for (len = 0; len < n; ++len)
		concat[len + i] = s2[len];
	return (concat);
}

