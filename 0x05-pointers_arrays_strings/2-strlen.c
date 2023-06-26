/**
* _strlen - that returns the length of a string
* @s: the string
* Return: the length of the string
*/
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		++counter;
		++s;
	}
	return (counter);
}

