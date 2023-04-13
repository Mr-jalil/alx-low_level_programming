#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 always (succes)
 */
int main(int argc, char *argv[])
{
		int j;

		for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
