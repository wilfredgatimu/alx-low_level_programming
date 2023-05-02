#include "lists.h"
/**
 * free_listint2 - used in freeing a linked list
 * @head: a pointer for the listint_t lists to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
