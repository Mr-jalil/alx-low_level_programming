#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * prints_strings - function that prints strings, followed by a new line.
 * @n: number of strings
 * @separator: delimiter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(valist);
	unsigned int i;
	char *s;

	if (n > 0)
	{
		va_start(valist, n);
		for (i = 1; i <= n; i++)
		{
			s = va_arg(valist, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(valist);
	}
	printf("\n");
}
