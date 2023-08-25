#include <stdlib.h>
#include "lists.h"

/**
 * list_len - shall return the num of elements in the linked list
 * @hr: shall point to the list_tmy list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_tmy *hr)
{
 size_t k = 0;

 while (hr)
 {
 k++;
 hr = hr->next;
 }
 return (k);
}
