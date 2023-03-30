#include "lists.h"
/**
 * add_node_end - adds new nod to beginning of linked list
 * @head: doudle pointer to list
 * @str: string to add to node
 * Return: address of new element (success) or NULL (fail)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;
	list_t *curr = *head;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (curr->next)
			curr = curr->next;
	}
	curr->next = new;
	return (*head);
}
