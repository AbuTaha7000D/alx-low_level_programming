#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the head of the linked list
 * @index: index
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;

	while (i <= index)
		head = head->next;
	return (head);
}
