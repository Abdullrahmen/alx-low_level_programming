#include "main.h"

/**
* print_last_digit - Print last digit
* @n: the number
* Return: the value of the last digit
*/
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar((n % 10) + 48);
	return (n % 10);
}

