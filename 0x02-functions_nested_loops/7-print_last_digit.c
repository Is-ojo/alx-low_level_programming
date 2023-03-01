#include "main.h"
/**
 * _abs - to check if a character is positive, negative or equal zero
 * @n: a character variable that we want to check
 * Return: the absolute value of the n
 */

int _abs(int n);


int _abs(int n)
{
if (n > 0)
{
	return (n);
}
else if (n == 0)
{
	return (0);
}
else
{
	n = n * -1;
	return (n);
}
}

/**
 * print_last_digit - to print the last digit
 * @n: a number we would want to check for the last digit
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
int r; /*this is the variable we would store the lat digit */
if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	n = _abs(n);
	r = n % 10;
	_putchar('0' + r);
	return (r);
}
}
