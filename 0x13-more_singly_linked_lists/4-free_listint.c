#include "lists.h"

/**
 * free_listint -  takes a pointer to the head of a listint_t frees all the nodes in the listint_t  list .
 * @head: Pointer to the head of the listint_t list.
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head)
    {
        current = head;
        head = head->next;
        free(current);
    }
}

