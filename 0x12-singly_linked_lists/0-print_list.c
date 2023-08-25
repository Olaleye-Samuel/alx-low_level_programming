#include <stdio.h>
#include "lists.h"

/**
 * print_list - wil print the elements of a linked list as required
 * @h: the pointer to the list_tmy list to be printed
 *
 * Return: will be the number of nodes printed
 */
size_t print_list(const list_tmy *hr)
{
 size_t v = 0;

 while (hr)
 {
 if (!hr->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", hr->len, hr->str);
 hr = hr->next;
 v++;
 }

 return (v);
}
