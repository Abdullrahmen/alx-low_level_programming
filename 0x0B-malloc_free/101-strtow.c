#include <stdlib.h>
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **words;
	unsigned int i = 0, j = 0, k = 0, len = 0, n_spaces = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	while (str[len])
		if (str[len++] == ' ')
			++n_spaces;
	words = malloc(sizeof(*words) * (n_spaces + 1));
	if (words == NULL)
		return (NULL);
	n_spaces = 0;
	while (str[i] == ' ')
		++i;
	j = i; /* begin of a words */
	while (str[i++])
		if (str[i] == ' ')
		{
			if (str[i + 1] == ' ')
			{
				++k;
				continue;
			}
			words[n_spaces] = malloc(sizeof(**words) * (i - j - k));
			if (words[n_spaces] == NULL)
			{
				for (i = 0; i < n_spaces; ++i)
					free(words[i]);
				free(words);
				return (NULL);
			}
			for (len = 0; len < (i - j - k); ++len)
				words[n_spaces][len] = str[j + len];
			++n_spaces; /* number of spaces (n_words - 1) */
			j = i + 1; /* begin of a word */
			k = 0; /* number of repeated spaces */
		}
	return (words);
}

