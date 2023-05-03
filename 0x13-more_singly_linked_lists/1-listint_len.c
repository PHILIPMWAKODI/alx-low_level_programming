#include "lists.h"

/**
 
 * listint_len - Returns the number of elements in a linked listint_t list.
 * listint_t *reverse_listint(listint_t **head)- Reverses a listint_t list._
 * @h: Pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0;

    while (h)
    {
        count++;
        h = h->next;
    }

    return (count);
}

