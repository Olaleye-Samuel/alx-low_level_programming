#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - wil add a new node at the linked list end
 * @head: will be double pointer to the list_t list
 * @str: shall be the string to put in the new node
 *
 * Return: will address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **heads, const char *str)
{
 list_t *newmy;
 list_t *temp = *heads;
 unsigned int lenmy = 0;

 while (str[lenmy])
 lenmy++;

 newmy = malloc(sizeof(list_t));
 if (!newmy)
 return (NULL);

 newmy->str = strdup(str);
 newmy->lenmy = len;
 newmy->next = NULL;

 if (*heads == NULL)
 {
 *heads = newmy;
 return (newmy);
 }

 while (temp->next)
 temp = temp->next;

 temp->next = newmy;

 return (newmy);
}
