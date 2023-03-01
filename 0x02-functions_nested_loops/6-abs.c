#include "main.h"

/**
 * _abs - to check if a character is positive, negative or equal zero
 * @n: a character variable that we want to check
 * Return: the absolute value of the n
 */

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
