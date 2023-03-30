#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: pointer to list to be freed
 */
void free_list(list_t *head)
{
	list_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
