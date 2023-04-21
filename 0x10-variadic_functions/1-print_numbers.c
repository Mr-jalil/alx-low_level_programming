#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbres -  function that prints numbers, followed by a new line.
 * @n: amount of arguments in list
 * @separator: delimiter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(valist);
	unsigned int i;

	if( n > 0)
	{
		va_start(valist, n);

		for( i = 0; i <= n; i++)
		{ 
			printf("%d", va_arg(valist, int));
			if( n != i && separator != NULL)
			printf("%s", separator);	
		}
		va_end(valist);
	}
	printf("\n");
}
