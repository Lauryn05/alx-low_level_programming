#include "lists.h"
/**
 * free_listint - frees linked list
 * @head: head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while(head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
