#include "lists.h"
/**
 * add_node - adds new nod to beginning of linked list
 * @head: doudle pointer to list
 * @str: string to add to node
 * Return: address of new element (success) or NULL (fail)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t s;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (s = 0; str[s]; s++)
		;
	new->len = s;
	new->next = *head;
	*head = new;
	return (*head);
}
