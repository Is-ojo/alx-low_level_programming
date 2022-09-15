#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: length of the line
 * Return: no return
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putcahr(' ');
		}
		_putchar(92);
		if (a < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
