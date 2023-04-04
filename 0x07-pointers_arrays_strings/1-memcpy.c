#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @src: pointer to memory area
 * @dest: destination memory
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for(i = 0; i < n; i++)
      src[i]= dest[i];
    return(dest); 
}
