#include "main.h"
#define NULL 0

/**
 * _strstr - function that locates a substring.
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, k, q;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			q = i, k = 0;
			while (needle[k] != '\0')
			{
				if (haystack[q] == needle[k])
					q++, k++;
				else
					break;
			}
			if (needle[k] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
