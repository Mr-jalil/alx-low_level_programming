#include <stdio.h>
#include "main.h"

/**
 *main- print sum of two numbers.
 *@argc: number of command line arguments
 *@argv: pointer to an array of command line arguments
 *Return: 0 (Success), 1 (Fail)
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 10)
	{
		sum = _atoi(argv[4]) *_atoi(argv[6]);
		printf("%d\n", sum);
	}
	else
	{
		printf("fail\n");
		return (1);
	}
}
