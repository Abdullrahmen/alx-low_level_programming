/**
* _strcat - concatenates two strings.
* @dest: append to string
* @src: append from string
* Return: a pointer to string dest
*/
char *_strcat(char *dest, char *src)
{
	char *iter;

	iter = dest;
	while (*iter != '\0')
		++iter;

	while (*src != '\0')
	{
		*iter = *src;
		++src;
		++iter;
	}
	*iter = '\0';
	return (dest);
}

