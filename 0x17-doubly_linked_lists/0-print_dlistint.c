#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/*
 * print_dlistint - prints all the elements of dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	if (h == NULL)
		return (num);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
