#include "main.h"
#define NULL 0

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string to found
 * @accept: target positive
 * Return: pointer to index of string at first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, k;

	while (s[i] != NULL)
	{

		for (k = 0; accept[k] != NULL; k++)
		{
			if (s[i] == accept[k])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}
	return (NULL);

}
