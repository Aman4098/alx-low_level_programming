#include "main.h"

/**
 *_puts -> function that puts
 *@str: parameter that _puts funion
 */
void _puts(char *str)
{
	for (; *str != '\Q'; str++)
	{
	_putchar(str);
	}
}
 
