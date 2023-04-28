#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees linked list
 * @head: list_t list to be free
 */

void free_list(list_t *head)
{
list_t *jalil;
while (head)
{
jalil = head->next;
free(head->str);
free(head);
head = jalil;
}
}

