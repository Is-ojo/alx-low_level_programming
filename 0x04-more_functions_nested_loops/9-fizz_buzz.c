#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0.
 */
int main(void)
{
	int n = 1;

	for (; n <= 100; n++)
	{
		if ((n % 15) == 0)
			printf("FizzBuzz");
		else if ((n % 5) == 0)
			printf("Buzz");
		else if ((n % 3) == 0)
			printf("Fizz");
		else
			printf("%d", n);
		if (n != 100)
			putchar(' ');
	}
	putchar('\n');

	return (0);

}
