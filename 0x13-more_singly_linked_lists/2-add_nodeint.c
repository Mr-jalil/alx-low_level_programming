#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at
 * the beginning of a listint_t list.
 * @head: pointer to head pointer of linked list
 * @n: data to add to new node
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *mynode;

	mynode = malloc(sizeof(listint_t));
	if (mynode == NULL)
		return (NULL);

	mynode->n = n;

	mynode->next = *head;
	*head = new_node;

	return (mynode);
}
