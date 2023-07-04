/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int exist;
	char *it;

	do {
		exist = 0;
		for (it = accept; *it != '\0'; ++it)
			if (*it == *s)
			{
				exist = 1;
				++n;
				++s;
				break;
			}
	} while (exist);

	return (n);
}

