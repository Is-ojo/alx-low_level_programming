#include "main.h"

/**
 * print_alphabet - Prints _putchar
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
_putchar('\n');
}
/**
 * print_alphabet_x10 - uses  _putchar to print the alphabets
 * from a to z ten times
 */

void print_alphabet_x10(void)
{
int j;
for (j = 1; j <= 10; j++)
	print_alphabet();
}
