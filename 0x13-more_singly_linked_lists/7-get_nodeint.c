#include "lists.h"
/**
 * get_nodeint_at_index - finds the nth node
 * @index: index of the node
 * @head: pointer to the first node in the linked list
 * Return: Address of indexed node if successful or NULL if fail
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t a;

	for (a = 0; (a < index) && (head->next != NULL); a++)
		head = head->next;
	if (a < index)
		return (NULL);
	return (head);
}
