#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: points to first element of the linked list
 * @index: Index of node to delete
 * Return: 1 if success -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = NULL;
	unsigned int a;
	listint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (a < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		a++;
	}
		curr = temp->next;
		temp->next = curr->next;
		free(curr);
		return (1);
	}

