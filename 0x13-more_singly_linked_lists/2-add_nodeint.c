#include "lists.h"

/**
 * add_nodeint - add a new element to the linked list
 * @head: head of the Linked List
 * @n: the new element value
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;
	return (newNode);
}

