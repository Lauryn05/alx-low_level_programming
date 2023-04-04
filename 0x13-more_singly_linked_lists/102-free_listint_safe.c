#include "lists.h"
/**
 * free_listint_safe - frees list with a loop
 * @h: pointer to first element on the list
 * Return: Size of list freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int sub;
	listint_t *temp;
	listint_t *hd = *h;

	if (h == NULL || hd == NULL)
		return (0);
	while (hd != NULL)
	{
		sub = hd - hd->next;
		if (sub > 0)
		{
			temp = hd->next;
			free(hd);
			hd = temp;
			len++;
		}
		else
		{
			free(hd);
			hd = NULL;
			len++;
			break;
		}
	}
	hd = NULL;
	return (len);
}

