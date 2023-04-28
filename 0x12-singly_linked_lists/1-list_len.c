#include "lists.h"
#include <stdlib.h>

/**
 * list_lenght - function that returns the number
 * of elements in a linked list_t list.
 * @h: pointer to the list_t list
 * return: the number of elements in h
 */

size_t list_len(const list_t *h)
{
   size_t count = 0;
	struct node *h;

	while( h != 0)
	{
		count++;
		h  = h -> next;
	}
	return (0);
}
