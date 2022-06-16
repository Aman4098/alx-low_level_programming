#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *This program will assign a random number to the variable n each time it is executed
 *Complete the source code in order to print the last digit of the number stored in the variable n.
 */
int main(void)
{
int n;
int x;

srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
printf("last digit of %d is %d" n, x);
if (x > 5)
{
	printf("greater than 5");
}
if (n == 0)
{	
	printf("0");
}
if (x < 0 && n != 0)
{
	printf("less than 6 not 0");
}

printf("\n");

return (0);
}






























