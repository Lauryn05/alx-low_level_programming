#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node to given position
 * @head: Points to first node on the list
 * @idx: Index to add the new node
 * @n: Integer to be put in the added node
 * Return: Address of new node if successful, NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (node = 0; temp != NULL && node < idx; node++)
	{
		if (node == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
