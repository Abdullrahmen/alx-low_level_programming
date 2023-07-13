#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);

	for (i = 0; i < (nmemb * size); ++i)
		arr[i] = 0;

	return (arr);
}

