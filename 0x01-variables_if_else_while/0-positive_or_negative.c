#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - take random number and check if it is greater than
 * 		lesser than or equal to zero 
 *Return: alwayes(0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return(0);
}
  		