#include "main.h"

void space(int a);
void harsh(int b);

/**
 * print_triangle - check the code
 * @size : this is the sieze of the triangle
 */

void print_triangle(int size)
{
int i = 1;
if (size > 0)
{
	while (i <= size)
	{
		space(size - i);
		harsh(i);
		_putchar('\n');
		i++;
	}
}
else
_putchar('\n');
}

/**
 * space - this prints a number of space
 * @a : number of space it would print
 */

void space(int a)
{
	for (; a >= 1; a--)
		_putchar(' ');
}


/**
 * harsh - prints # a number of times
 * @b : the number of time it is going to print #
 */

void harsh(int b)
{
	for (; b >= 1; b--)
		_putchar('#');
}
