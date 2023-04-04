#include "lists.h"
/**
 * pop_listint - deletes head node of the linked list
 * @head: points to first element of linked list
 * Return: data in head node (n) if successful or 0 is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	if (temp == NULL)
		return (0);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
