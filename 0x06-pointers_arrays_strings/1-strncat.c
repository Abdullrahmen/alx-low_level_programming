/**
* _strncat - concatenates two strings,
* it will use at most n bytes from src
* @dest: append to string
* @src: append from string
* @n: most n bytes from src
* Return: a pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *iter;
	int counter = 0;

	iter = dest;
	while (*iter != '\0')
		++iter;

	while ((*src != '\0') && (counter < n))
	{
		*iter = *src;
		++src;
		++iter;
		++counter;
	}
	*iter = '\0';
	return (dest);
}

