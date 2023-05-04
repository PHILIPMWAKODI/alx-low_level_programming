#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *next = NULL;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		if (next >= current)
			break;
		current = next;
	}

	*h = NULL;
	return (count);
}

