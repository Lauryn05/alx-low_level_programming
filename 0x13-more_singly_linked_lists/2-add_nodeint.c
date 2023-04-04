#include "lists.h"
/**
 * add_nodeint - adds new node to beginning of linked list
 * @head: points to first node on the list
 * @n: integer inserted in new node
 * Return: Address of added node if successful, else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node =  malloc(sizeof(listint_t));
	if (new_node == 0)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
