#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node of the list
 *
 * Return: the number of nodes in the list, or -1 if the function fails
 */
int print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head, *fast = NULL;
	int count = 0;

	if (head == NULL)
		return (0);

	while (slow != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *) slow, slow->n);
		fast = slow->next;
		slow = slow->next;
		if (fast != NULL)
			fast = fast->next;
		if (fast != NULL && fast >= slow)
		{
			printf("-> [%p] %d\n", (void *) fast, fast->n);
			return (count);
		}
	}
	return (count);
}

