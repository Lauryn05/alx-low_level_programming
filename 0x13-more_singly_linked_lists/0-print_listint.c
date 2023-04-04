#include "lists.h"
/**
 * print_listint - lists all elements in list_t list
 * @h: head of linked list to print
 * Return: number of nodes in linkrd list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
