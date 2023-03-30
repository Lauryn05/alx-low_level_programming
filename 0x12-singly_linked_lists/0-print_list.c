#include "lists.h"
/**
 * print_list - prints elements of a linked list
 * @h: pointer to list to print
 * Return: nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t ele = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		ele++;
	}
	return (ele);
}
