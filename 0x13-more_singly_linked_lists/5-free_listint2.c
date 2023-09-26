#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: head fo the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	else
	{
		while (*head != NULL)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
	}
}

