#include "main.h"

/**
 * _memset: point entry
 * @b: constante byte
 * @s: pointed  destination
 * @n: bytes
 * return: always 0 (succes)
 */
char *_memset(char *s, char b, unsigned int n)
{

	 unsigned int i;

	 for(i = 0; i < n ; i++)
	    s[i] = b;
	   return s;  
}
