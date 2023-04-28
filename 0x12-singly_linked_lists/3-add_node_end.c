#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *jalil;
list_t *temp = *head;
unsigned int len = 0;

while (str[len])
len++;

jalil = malloc(sizeof(list_t));
if (!jalil)
return (NULL);

jalil->str = strdup(str);
jalil->len = len;
jalil->next = NULL;

if (*head == NULL)
{
*head = jalil;
return (jalil);
}

while (temp->next)
temp = temp->next;

temp->next = jalil;

return (jalil);
}
