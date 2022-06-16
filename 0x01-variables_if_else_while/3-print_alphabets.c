#include <stdio.h>

/**
 *main- Write a program that prints the alphabet in lowercase
 *  then in uppercase, followed by a new line.
 *  Return: alwayes 0
 */
int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
	putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
	putchar(ch);
}
	putchar(10);

	return (0);
}

