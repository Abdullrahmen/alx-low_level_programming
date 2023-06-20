#include "main.h"

/**
* main - Main function
* Return: On success 1
*/
int main(void)
{
	char alx[] = "_putchar";
	int i;

	for (i = 0; i < 8; ++i)
	{
		_putchar(alx[i]);
	}
	_putchar('\n');

	return (0);
}

