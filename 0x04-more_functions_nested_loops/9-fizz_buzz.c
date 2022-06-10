#include "main.h"
#include <stdio.h>


/**
 * fizz_buzz -> printing to 100
 */
int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x == 100)
		printf("BUZZ");			
		else if (x % 3 == 0 && x % 5 == 0)
		printf("FizzBuzz") x);
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else 
			printf("%d", x);
}
		printf('\n');
}i

