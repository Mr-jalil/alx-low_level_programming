#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @src: source
 * @dest: destination 
 * @n: number of byte to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
      
    	unsigned int i;
	{

    for(i = 0; i < n; i++)
      src[i] = dest[i];
	}
    return(dest); 
}

