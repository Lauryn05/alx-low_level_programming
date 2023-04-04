#include "lists.h"
/**
 * sum_listint - adds elements in the linked list
 * @head: pointer to first node of linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = head->n + sum;
		head = head->next;
	}
	return (sum);
}
