#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * The function checks if the head node of the list is NULL
 * @head: Pointer to the head of the listint_t linked list.
 *
 * Return: The head node's data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    int head_data;
    listint_t *temp_node;

    if (head == NULL || *head == NULL)
        return (0);

    temp_node = *head;
    head_data = temp_node->n;
    *head = (*head)->next;
    free(temp_node);

    return (head_data);
}

