#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *current;
    size_t count = 0;

    for (current = h; current != NULL; current = current->next)
    {
        printf("%d\n", current->n);
        count++;
    }

    return (count);
}

