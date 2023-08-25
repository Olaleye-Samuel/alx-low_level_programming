#include <stdlib.h>
#include "lists.h"

/**
 * list_len - shall return the num of elements in the linked list
 * @h: shall point to the list_tmy list
 *
 * Return: will be number of elements in h
 */
size_t list_len(const list_t *h)
{
 size_t n = 0;

 while (h)
 {
 n++;
 h = h->next;
 }
 return (n);
}
