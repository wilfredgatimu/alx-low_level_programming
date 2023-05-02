#include "lists.h"
/**
 * get_nodeint_at_index - it returns the nodes certain index's in a linked list
 * @head: the first node in the linked lists
 * @index: the index of the node to be returned
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
