#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: alwayes(0)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
		printf("last digit of %d is %d is greater than 5\n", n, last_digit);
	else if (last_digit < 6 && last_digit != 0)
		printf("last digit of %d is  %d and is less than 6 and not 0\n", n,
				last_digit);
	else
		printf("last digit of %d is %d and is 0\n", n, last_digit);
	return (0);
}
