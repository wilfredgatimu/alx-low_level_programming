#include "lists.h"
/**
 * free_listint - it helps in freeing linked lists
 * @head: for listint_t lists to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
