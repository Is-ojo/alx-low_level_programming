#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is a mono functioned program
 * Description: this code generates a  random number,and tells if it is a
 * + or - number using printf
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ld;

	last_digit = n % 10;
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %d is %d and is 0\n", n, ld);
	else if (last_digit < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
