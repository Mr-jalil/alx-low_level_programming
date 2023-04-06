#include "main.h"

/**
 * main - function that prints a string, followed by a new line
 *
 */

void _puts_recursion(char *s);
 
{
	if (*s == NULL)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion s;
}
