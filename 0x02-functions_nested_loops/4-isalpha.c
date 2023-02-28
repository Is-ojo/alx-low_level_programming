#include "main.h"

/**
 * _isalpha - to check if a character is alphabet or not
 * @c: a character variable that we want to check
 * Return: 1 if it is alphabet and 0 if it is an alphabet
 */

int _isalpha(int c)
{
if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	return (1);
else
	return (0);
}
