#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 * Description: this prints the alphabet using a for loop
 */
void print_alphabet_x10(void)
{
int i;
int x;

for (x = 0; x < 10; x++)
{
	for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
_putchar('\n');
}
}
