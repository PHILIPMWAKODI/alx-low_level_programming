#include "lists.h"

void free_listint2(listint_t **h) {
  listint_t *t;

  if (h == NULL || *h == NULL) return;

  while (*h != NULL) {
    t = (*h)->next;
    free(*h);
    *h = t;
  }

  *h = NULL;
}

