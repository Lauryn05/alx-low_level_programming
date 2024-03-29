#include "lists.h"
/**
 * listint_len - counts number of elements in linked list
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
