#include "main.h"
#include <string.h>
/**
 *_strncpy -> for coping purpouse
 *@dest: parame 1
 *@src: para 2
 *@n: para 3
*Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
