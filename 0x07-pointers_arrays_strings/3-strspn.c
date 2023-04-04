#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, a;
	int pos = 0;

	while (s[i] != '\0')
	{

		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
			{
				pos++;
				break;
			}
			if (accept[a + 1] == '\0' && s[i] != accept[a])
				return (pos);
		}
		i++;
	}
	return (pos);

}
