#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list.
 * @head: pointer to head pointer of linked list
 * @n: data to add to new node
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *jalil_node, *tmp;

        jalil_node = malloc(sizeof(listint_t));
	if (jalil_node == NULL)
		return (NULL);

	jalil_node->n = n;
	jalilnode->next = NULL;

	if (*head == NULL)
		*head = jalil_node;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = jalil_node;
	}

	return (jalil_node);
}
