#include <stdio.h>

/**
 * main -finds and prints the sum of the even-valued terms
 * followed by new line
 * Return: alwayes 0
 */
int main(void)
{
	int i;
	unsigned long int j ,k , next, sum;
	j = 1;
	k = 2;
	sum = 0;
	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 00)
				{
				sum =sum = j;
				}
				next = J + k;
				j = k;
				k = next;
				}

				printf("%lu\n",sum);
				return (0);
}
