#include "main.h"

/**
 * print_to_98 - this is a function that prints numbers from a number 'n' to 98
 * @: this is the number we want to start printing from
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		int d1;
		int d2;

		if (n < 0)

		{
			n = -1 * n;
			d1 = n / 10;
			d2 = n % 10;

			if (d1 != 0)
			{
				_putchar('-');
				_putchar('0' + d1);
			}
			else 
			{
				_putchar(' ');
				_putchar('-');
			}
			_putchar('0' + d2);
			_putchar(',');
			_putchar(' ');
			n = n * -1;
		}
		else 
		{
			d1 = n / 10;
			d2 = n % 10;

			if (d1 != 0)
				_putchar('0' + d1);
			_putchar('0' + d2);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else 
				_putchar('\n');
		}
		n++;
	}
}

