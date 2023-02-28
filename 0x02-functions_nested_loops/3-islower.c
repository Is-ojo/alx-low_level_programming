#include "main.h"

/**
 * _islower - to check if a character is lower or else
 * @c: a character variable that we want to check
 * Return: 1 if it is lower and 0 if it is not lower
 */

int _islower(int c)
{
if (c <= 'z' && c >= 'a')
	return (1);
else
	return (0);
}
