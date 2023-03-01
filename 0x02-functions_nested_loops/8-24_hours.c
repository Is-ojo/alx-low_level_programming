#include "main.h"

/**
 * jack_bauer - Prints _putchar
 */

void jack_bauer(void)
{
int hh = 0;

while (hh < 24)
{
	int mm = 0;
	int d4;
	int d3;
	int d2;
	int d1;

	while (mm < 60)
	{
		d4 = mm % 10;
		d3 = mm / 10;
		d2 = hh % 10;
		d1 = hh / 10;
		mm++;
		_putchar('0' + d1);
		_putchar('0' + d2);
		_putchar(':');
		_putchar('0' + d3);
		_putchar('0' + d4);
		_putchar('\n');
	}
	hh++;
}
}
