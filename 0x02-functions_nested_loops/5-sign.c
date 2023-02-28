#include "main.h"

/**
 * print_sign - to check if a character is positive, negative or equal zero
 * @n: a character variable that we want to check
 * Return: 1 if it is positive, -1 if it is negative or 0 if it equals
 */

int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
