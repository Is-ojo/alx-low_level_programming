#include "main.h"
/**
 * times_table - prints the multiplication table from zero to nine
 */
void times_table(void)
{
int num = 1;

while (num < 10)
{
	int mul = 0;
	int d1;
	int d2;
	int result;

	_putchar('0');
	while (mul <= 9)
	{
		result = num * mul;
		d1 = result / 10;
		d2 = result % 10;

		if (d1 == 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + d2);
			if (mul == 9)
				_putchar('\n');
		}
		else
		{
			_putchar(',');
			_putchar(',');
			_putchar('0' + d1);
			_putchar('0' + d2);
			if (mul == 9)
				_putchar('\n');
		}
		mul++;
	}
	num++;
}
}
