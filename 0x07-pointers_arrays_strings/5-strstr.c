
/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *it, *it2;

	for (; *haystack != '\0'; ++haystack)
		if (*haystack == *needle)
		{
			for (it = needle, it2 = haystack; *it; ++it, ++it2)
				if (*it != *it2)
					break;

			if (!*it)
				return (haystack);
		}

	return (0);
}

