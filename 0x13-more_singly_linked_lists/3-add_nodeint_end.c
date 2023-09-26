#include "lists.h"

/**
 * add_nodeint_end - add element to the end
 * @head: head of linked list
 * @n: the new element
 *
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp = (*head);

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	return (newNode);
}

