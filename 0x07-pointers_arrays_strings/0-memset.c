#include "main.h"
/**
 * memset function - print a function that fills memory with a constant byte
 *@buffer: the address of memory to print
 *@size: the size of the memory to print
 *
 * return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n);{

	 unsigned int i;
	 for(i = 0; i < n ; i++);
	    s[i] = b;
	   return s;  
}
