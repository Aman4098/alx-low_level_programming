#include <stdio.h>

/**
 * main -program that prints the lowercase alphabet in reverse
 * return alwayse 0
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{

		putchar(letter);
}

		putchar('\n');
		return (0);
}
