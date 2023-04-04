#include "lists.h"
/**
 * print_listint_safe - prints linked list with a loop safely
 * @head: pointer to the first element on the list
 * Return: number of nodes, success
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *last;
	size_t count, new;

	temp = NULL;
	last = NULL;
	temp = head;
	count = 0;
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;
		last = head;
		new = 0;
		while (new < count)
		{
			if (temp == last)
			{
				printf("->[%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
			last = last->next;
			new++;
		}
		if (head == NULL)
			exit(98);
	}
	return (count);
}
