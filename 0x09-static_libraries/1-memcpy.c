/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *it;

	it = dest;
	for (i = 0; i < n; ++i, ++it, ++src)
		*it = *src;

	return (dest);
}

